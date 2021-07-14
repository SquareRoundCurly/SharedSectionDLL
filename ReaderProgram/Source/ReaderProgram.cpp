#include <conio.h>
#include <iostream>
#include <chrono>
#include <thread>

#include "SharedSectionDLL.hpp"

int getch_non_block()
{
	if (_kbhit())
		return _getch();
	else
		return -1;
}

int main()
{
	std::cout << "Press esc to exit!" << std::endl;

	char c;
	while(true)
	{
		c = getch_non_block();
		if (c == 27) break;

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));

		int value = Get();

		std::cout << "Get value : " << value << std::endl;
	}

	return 0;
}