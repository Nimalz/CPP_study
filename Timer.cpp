#include <iostream>
#include "Timer.h"


Timer::Timer()
{
	StartTimePoint = std::chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
	Stop();
}

void Timer::Stop()
{
	auto EndTimePoint = std::chrono::high_resolution_clock::now();

	auto start = std::chrono::time_point_cast<std::chrono::microseconds>(StartTimePoint).time_since_epoch().count();
	auto end = std::chrono::time_point_cast<std::chrono::microseconds>(EndTimePoint).time_since_epoch().count();

	auto duration = end - start;
	double ms = duration * 0.001;

	std::cout << duration << "us (" << ms << "ms)\n";
}
