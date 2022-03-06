#include<iostream>

void clear()
{
	std::cout << "\x1B[2J\x1B[H";
}