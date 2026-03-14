//
// Created by Користувач on 08.03.2026.
//

#ifndef UNTITLED_Course_H
#define UNTITLED_Course_H

#include <iostream>
#include <string>
#include "main.h"
class  Course
{
    protected:
   std:: string courseName;
    int credits;

public:

    Course(std::string name, int cr)
    {
        courseName = name;
        credits = cr;
    }

    void print()
    {
        std::cout << "Course: " << courseName << std::endl;
       std:: cout << "Credits: " << credits <<std:: endl;
    }
};
#endif //UNTITLED_Course_H