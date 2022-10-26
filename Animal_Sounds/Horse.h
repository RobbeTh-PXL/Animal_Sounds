#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"
class Horse :
    public Animal
{
public:
    Horse(std::string name);
    void react(int db);
};

#endif // !HORSE_H
