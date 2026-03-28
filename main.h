//
// Created by Користувач on 27.02.2026.
//

#ifndef UNTITLED_MAIN_H
#define UNTITLED_MAIN_H
#include <iostream>
#include <string>
#include "UniversityPerson.h"
#include "Course.h"

class Student final : public UniversityPerson
{
    protected:

   double averageGrade;
    std::string grop;
    double scholarship;
    Course course;

public:

    static int count;

    Student(std::string n, int a, std::string g,std::string f, std::string p,double grade,std:: string gr, double s,std::string courseName, int credits)
        : UniversityPerson(n, g,g,a,p),course(courseName,credits), grop (gr), averageGrade (grade) , scholarship(s) {};

    Student(const Student& other)
        : UniversityPerson(other),course(other.course)
    {
        averageGrade = other.averageGrade;
        grop = other.grop;
        scholarship = other.scholarship;

    }

    Student(Student&& other) noexcept
    : UniversityPerson(std::move(other)),
      course(std::move(other.course))
    {
        averageGrade = other.averageGrade;
        grop = std::move(other.grop);
        scholarship = other.scholarship;

    }

    Student& operator=(const Student& other)
    {
        if(this != &other)
        {
            UniversityPerson::operator=(other);

            averageGrade = other.averageGrade;
            grop = other.grop;
            scholarship = other.scholarship;
            course = other.course;
        }

        return *this;
    }

    void info()
    {
        std:: cout <<" student info "<< std::endl;
    }

    void work() override
    {
        std:: cout <<"student studies"<<std::endl;
    }

    void role() override
    {
        std::cout << "i am a student" << std::endl;
    }

    void print() override
    {
        UniversityPerson::print();
       std:: cout << "Average grade: " << averageGrade << std:: endl;
        std:: cout << "Group: " << grop << std:: endl;
        std:: cout << "Scholarship: " << scholarship <<  std::endl;

        course.print();
    }

   virtual ~Student() {std ::cout << "destructor"<<std::endl;};


};

#endif //UNTITLED_MAIN_H