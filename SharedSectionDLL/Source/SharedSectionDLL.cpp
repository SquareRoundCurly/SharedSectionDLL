// Source header
#include "SharedSectionDLL.hpp"

#pragma comment(linker, "/section:SHARED,RWS")

#pragma data_seg("SHARED")
int x = 0;
#pragma data_seg()

int Get()
{
	return x;
}

void Set(int value)
{
	x = value;
}
