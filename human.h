//
// Created by Користувач on 14.03.2026.
//

#ifndef UNTITLED_HUMAN_H
#define UNTITLED_HUMAN_H

#include <iostream>
#include <string>

class Human
{       protected:

    std::string name;
    int age;
    std::string gender;
    public:
    Human(std::string n, int a,std::string g) : name(n), age(a),gender(g) {};
    virtual ~Human() {};
    virtual void print()
    {
       std:: cout << "Name: " << name << std::endl;
       std:: cout << "Age: " << age << std::endl;
       std:: cout << "Gender: " << gender <<std:: endl;
    }
};

#endif //UNTITLED_HUMAN_H