#pragma once
#ifndef M_chek_h
#define M_chek_h
#include <iostream>

struct AllocationMetrics
{
	uint32_t TotalAllocated = 0;
	uint32_t TotalFreed = 0;
	uint32_t CurrentUsage() { return TotalAllocated - TotalFreed; }
};
static AllocationMetrics s_AllocationMetrics;


void PrintMemoryUsage();


#endif