#include "Horse.h"
#include <iostream>

Horse::Horse(std::string name) : Animal(name)
{
}

void Horse::react(int db)
{
	if (db % 2 == 0)
	{
		std::cout << name << ": ..." << std::endl;
	}

	else
	{
		std::cout << name << ": HiHiHi" << std::endl;
	}
}
