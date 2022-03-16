#include "Timer.h"

void Timer::start()
{
	m_StartTime = std::chrono::system_clock::now();
	isRunning = true;
}

void Timer::stop()
{
	m_EndTime = std::chrono::system_clock::now();
	isRunning = false;
}

double Timer::elapsedMilliseconds()
{
    std::chrono::time_point<std::chrono::system_clock> endTime;

    if (isRunning)
    {
        endTime = std::chrono::system_clock::now();
    }
    else
    {
        endTime = m_EndTime;
    }

    return std::chrono::duration_cast<std::chrono::milliseconds>(endTime - m_StartTime).count();
}

double Timer::elapsedSeconds()
{
    return elapsedMilliseconds() / 1000.0;
}
