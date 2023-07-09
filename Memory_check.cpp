#include "Memory_check.h"



//void* operator new(size_t size)
//{
//	//std::cout << "Allocating " << size << "bytes" << std::endl;
//	s_AllocationMetrics.TotalAllocated += size;
//	return malloc(size);
//}
//
//void operator delete(void* memory, size_t size)
//{
//	//std::cout << "Freeing " << size << "bytes" << std::endl;
//	s_AllocationMetrics.TotalFreed += size;
//	free(memory);
//}
//
//void PrintMemoryUsage()
//{
//
//	std::cout << "Memory Usage: " << s_AllocationMetrics.CurrentUsage() << "bytes\n" << std::endl;
//}
