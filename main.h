#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityPerson.h"
#include "Iperson.h"
#include "Course.h"
#include <fstream>

class Student : public UniversityPerson, public Iperson
{
    double averageGrade;
    std::string group;
    double scholarship;
    Course course;

public:
    Student(std::string n="", int a=0, std::string g="",
        std::string f="", std::string p="",
        double grade=0, std::string gr="",
        double s=0, std::string courseName="", int credits=0)
    : UniversityPerson(n, f, g, a, p),
      averageGrade(grade),
      group(gr),
      scholarship(s),
      course(courseName, credits)
    {
    }

    void role() override
    {
        std::cout << "I am a student\n";
    }

    void work() override
    {
        std::cout << "Student studies\n";
    }

    void action() override
    {
        std::cout << name << " studies...\n";
    }

    void info() override
    {
        std::cout << "Student info\n";
    }
    std::string getName() const
    {
        return name;
    }
    void print() override
    {
        UniversityPerson::print();
        std::cout << "Group: " << group
                  << "\nAvg grade: " << averageGrade
                  << "\nScholarship: " << scholarship << std::endl;
        course.print();
    }


    void save(std::ofstream& out)
    {
        out << name << " " << age << " " << gender << " "
            << group << " " << averageGrade << " "
            << scholarship << "\n";
    }


    void load(std::ifstream& in)
    {
        in >> name >> age >> gender >> group >> averageGrade >> scholarship;
    }
};

#endif