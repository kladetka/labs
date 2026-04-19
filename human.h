#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

class Human
{
protected:
    std::string name;
    int age;
    std::string gender;

public:
    Human(std::string n = "", int a = 0, std::string g = "")
        : name(n), age(a), gender(g) {}

    virtual ~Human() {}

    virtual void role() = 0;

    virtual void work()
    {
        std::cout << "Human work"<<std::endl;
    }

    virtual void print()
    {
        std::cout << "Name: " << name << "Age: " << age
                  << "Gender: " << gender << std::endl;
    }
};

#endif