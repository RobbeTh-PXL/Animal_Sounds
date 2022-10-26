#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : //Inherit class from Animals
    public Animal
{
public:
    Dog(std::string name);
    void react(int db);
};

#endif // !DOG_H
