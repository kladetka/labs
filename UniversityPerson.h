//
// Created by Користувач on 14.03.2026.
//

#ifndef UNTITLED_UNIVERSITYPERSON_H
#define UNTITLED_UNIVERSITYPERSON_H
#include <iostream>
#include <string>

#include "human.h"
#include "main.h"

class UniversityPerson : public Human
{
    protected:
      std::string facultet;
    std::string  position;

public:

  UniversityPerson(std::string n, std::string g,std::string f, int a,std::string p)
    : Human(n,a,g), facultet(f), position(p){ };
    virtual ~UniversityPerson(){ };

    void print() override
    {
        Human::print();
       std:: cout << "Faculty: " << facultet <<std:: endl;
        std::cout << "Position: " << position <<std:: endl;
    }
};


#endif //UNTITLED_UNIVERSITYPERSON_H