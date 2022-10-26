#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal //Base class
{
public:
	Animal() {}; //Default Constructor
	Animal(std::string name); //Parameterized constructor

	virtual void react(int db)  = 0; //Member function
//	void setName(std::string nm);

	virtual ~Animal() {}; //Destructor

protected:
//	std::string getName(void);
	std::string name; //Member variable

private:
//	std::string name; //Member variable
};

#endif // !ANIMAL_H
