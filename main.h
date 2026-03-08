//
// Created by Користувач on 27.02.2026.
//

#ifndef UNTITLED_MAIN_H
#define UNTITLED_MAIN_H
#include <iostream>
#include <string>

class Student
{
    std::string name;
    int age;
public:
    static int count;
    Student(std::string n, int a)
        : name (n), age (a){std ::cout << "creat constructor "<< "age :"<<a<<"name :"<< n<< std::endl;  count ++;};

 Student()
    : name{"alex"}, age{12}{std ::cout << "creat one more constructor "<< "name:"<< name <<" age:"<< age<<std::endl; count ++;};

    static void showcount()
    {
        std::cout << "teachers: " << count << std::endl;
    }
    void operator-()
    {
        age = -age;
    }
    Student operator+(const Student& s)
    {
        Student temp;
        temp.age = age + s.age;
        temp.name = name + "_" + s.name;
        return temp;
    }

    friend std::ostream& operator<<(std::ostream& out, const Student& s)
    {
        out << "name: " << s.name << " age: " << s.age;
        return out;
    }

    friend std::istream& operator>>(std::istream& in, Student& s)
    {
        in >> s.name >> s.age;
        return in;
    }

    ~Student() {std ::cout << "destructor"<<std::endl;};


};

#endif //UNTITLED_MAIN_H