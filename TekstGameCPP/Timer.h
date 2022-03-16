#pragma once
#include <iostream>
#include <chrono>
#include <ctime>
#include <cmath>

class Timer
{
public:
	void start();
	void stop();
	double elapsedMilliseconds();
	double elapsedSeconds();
	bool isRunning = false;
private:
	std::chrono::time_point<std::chrono::system_clock> m_StartTime;
	std::chrono::time_point<std::chrono::system_clock> m_EndTime;
};

