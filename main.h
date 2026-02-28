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
    Student(std::string n, int a)
        : name (n), age (a){std ::cout << "creat constructor "<< "age :"<<a<<"name :"<< n<< std::endl;};

 Student()
    : name{"alex"}, age{12}{std ::cout << "creat one more constructor "<< "name:"<< name <<" age:"<< age<<std::endl;};

    ~Student() {std ::cout << "destructor"<<std::endl;};

};

class Teacher
{
    std :: string name;
    int stash;
    public:
    Teacher(std::string na, int s)
        : name{na}, stash{s}{std ::cout << "creat constructor "<<"name :"<< na<<"stash:"<<stash<<std::endl;};
    ~Teacher(){std ::cout << "destructor"<<std::endl;};
};

class Curse
{
    int namber;
    public:
    Curse(int n)
        : namber(n) {std ::cout << "creat constructor "<<"namber:"<<n<<std::endl;};
    ~Curse(){std ::cout << "destructor"<<std::endl;};
};


#endif //UNTITLED_MAIN_H