#include "Cat.h"
#include <iostream>

Cat::Cat(std::string name) : Animal(name)
{
}

void Cat::react(int db)
{
	if (db < 5)
	{
		std::cout << name << ": miaauw" << std::endl;
	}

	else
	{
		std::cout << name << ": MIAAUW!" << std::endl;
	}
}
