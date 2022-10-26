#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Horse.h"

#define AMOUNT_OF_ANIMALS 20

int main()
{
    //CREATE AN ANIMAL VECTOR LIST
    std::vector<Animal *> list;
    for (int i = 0; i < AMOUNT_OF_ANIMALS; i++) //CREATE & ALLOCATE NEW RANDOM ANIMALS
    {
        switch (rand() % 3)
        {
        case 0:
            list.push_back(new Dog("Lord Sniffles")); //CREATE A DOG
            break;
        case 1:
            list.push_back(new Cat("Mr Mittens")); //CREATE A CAT
            break;
        case 2:
            list.push_back(new Horse("Hoover The Great")); // CREATE A HORSE
            break;
        }
    }

    //RUN THROUGH LIST WITH A RANDOM SOUND LEVEL
    for (int i = 0; i < AMOUNT_OF_ANIMALS; i++)
    {
        list[i]->react(rand() % 10);
    }

    //CLEAN UP MEM
    for (int i = 0; i < AMOUNT_OF_ANIMALS; i++)
    {
        delete(list[i]);
    }

    return 0;
}


/*
    //CREATE OBJECT FROM CLASS
    Dogs dog1("Lord Sniffles");
    Cats cat1("Mr Mittens");
    Horses horse1("Hoover The Great");

    //dog1.setName("Lord Sniffles");
    //cat1.setName("Mr Mittens");
    //horse1.setName("Hoover The Great");

    for (int db = 1; db <= 10; db += 3)
    {
        std::cout << "The sound volume is " << db << std::endl;

        dog1.react(db);
        cat1.react(db);
        horse1.react(db);

        std::cout << std::endl;
    }
    */

    //MEM Alloceren
    // int * waarde = new int;
    //delete waarde;

    //MEM ARRAY Alloceren (42 plaatsen)
    //int * waardes = new int[42];
    //delete[] waardes;
    // 
    //Default contructor nodig bij alloceren van classes
    //int size;
    //std::cin >> size;
    //Dog * waardes;
    //waardes = new Dog[size];

    //Container class (linked list)
    //std::vector<int> lijst;
    //lijst.push_back(15); add number to list
    //lijst.at(1); show contents of pos 1