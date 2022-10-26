#include "Dog.h"
#include <iostream>

Dog::Dog(std::string name) : Animal(name) //als er een hond is met een naam maak dan ook een dier met dezeflde naam
{
}

void Dog::react(int db)
{
	if (db < 3)
	{
		std::cout << name << ": woof" << std::endl;
	}

	if (3 < db && db < 7)
	{
		std::cout << name << ": WAF WAF" << std::endl;
	}

	if (db >= 7)
	{
		std::cout << name << ": rrrrAF!" << std::endl;
	}
}
