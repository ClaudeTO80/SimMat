#include <chrono>
#include "GnuPlot.h"

std::thread GnuPlot::m_thread;
bool GnuPlot::m_connected{ false };
bool GnuPlot::m_kill{ false };
FILE* GnuPlot::m_gp{ nullptr };
std::deque<std::string> GnuPlot::m_cmds;
std::mutex GnuPlot::m_mtx;

bool GnuPlot::connect(const std::filesystem::path& path)
{
	std::thread temp([&]() 
	{
			m_gp = _popen((path.string() + " -persist").c_str(), "w");
			while (!m_kill)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
				std::lock_guard<std::mutex> lck(m_mtx);
				if (!m_cmds.empty())
				{
					std::for_each(m_cmds.begin(), m_cmds.end(), [&](const std::string& curr) {
						fputs(curr.c_str(), m_gp);
					});
					m_cmds.clear();
					fflush(m_gp);
				}
			}

			return;
	});

	temp.detach();
	m_thread = std::move(temp);
	std::this_thread::sleep_for(std::chrono::seconds(10));
	return true;
}

bool GnuPlot::close()
{
	m_kill = true;
	if (m_gp)
		fclose(m_gp);

	return true;
}

bool GnuPlot::addComand(const std::string& cmd, bool lock)
{
	if (lock)
	{
		std::lock_guard<std::mutex> lck(m_mtx);
		m_cmds.push_back(cmd);
	}
	else
		m_cmds.push_back(cmd);

	return true;
}

bool GnuPlot::addComands(const std::vector<std::string>& cmds)
{
	std::lock_guard<std::mutex> lck(m_mtx);
	std::for_each(cmds.begin(), cmds.end(), [](const std::string& cmd) {
			addComand(cmd, false);
		});

	return true;
}