#ifndef CAT_H
#define CAT_H

#include "Animal.h"
class Cat :
    public Animal
{
public:
    Cat(std::string name);
    void react(int db);
};

#endif // !CAT_H
