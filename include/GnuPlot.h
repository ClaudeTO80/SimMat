#pragma once

#include <thread>
#include <filesystem>
#include <deque>
#include <string>
#include <mutex>

class GnuPlot
{
public:
	static bool connect(const std::filesystem::path& path);
	static bool close();
	static bool addComand(const std::string& cmd, bool lock=true);
	static bool addComands(const std::vector<std::string>& cmds);
private:
	static std::thread m_thread;
	static bool m_connected;
	static bool m_kill;
	static FILE* m_gp;
	static std::deque<std::string> m_cmds;
	static std::mutex m_mtx;
};