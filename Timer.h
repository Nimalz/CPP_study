#pragma once
#ifndef Timer_H
#define Timer_H
#include <chrono>
class Timer
{
public:
	Timer();
	~Timer();
	void Stop();
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> StartTimePoint;
};
#endif
