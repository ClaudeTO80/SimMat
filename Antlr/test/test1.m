%A=[linspace(2,75,4); 5 linspace(9,-45,3); linspace(-7,29,3) 12.1; linspace(0,-1,4)]
%N=20
S=__linspace__(3,4,10);
A=rand(20)
b=rand(20,1)
%x = linsolve(A,b)
%d=A*x-b
%
%M=15
%A1=rand(M,N)
%b1=rand(M,1)
%y = linsolve(A1,b1)
%d=A1*y-b1

%[L,U,P]=lu(A);
%[L1,U1,P1,Q1]=lu(A);
%M1=inv(P)*L*U
%d=A-M1
%M2=inv(P1)*L1*U1*inv(Q1)
%d1=A-M2

%N=4
%y=zeros(N)
%eye1=eye(4)
%eye2=eye(5,4)
%%N=sqrt(4);
%%w=linspace(1,10,11);
%%one2=ones(4);
%%k=y+one2;
%one1=ones(1,10)
%
%%t=linspace(0,1,2^16);
%%f=1;
%%w=2*pi*f;
%%y=sin(w*t);
%Fs = 1000;            % Sampling frequency                    
%T = 1/Fs;             % Sampling period       
%L = 1500;             % Length of signal
%t = (0:L-1)*T;        % Time vector
%freq=50;
%w=2*pi*freq;
%f = Fs*(0:(L/2))/L;
%y=sin(w*t);
%Y = fft(y)
