
#include "main.h"
#include "Course.h"
#include "teacher.h"
#include "human.h"


int main ()
{

    Student s1("Sasha",17,"Male","ips","Student",100,"143",2008,"OOP",5);

    s1.print();
    std::cout <<"coppy constructor :"<<std::endl;
    Student s2 = s1;

    s2.print();
    std::cout <<"move constructor :"<<std::endl;
    Student s3 = std::move(s1);

    s3.print();
    std::cout <<"operator= :"<<std::endl;
    Student s4(" ", 0," "," "," ",0," ",0, " ", 0);
    s4 = s2;

    s4.print();

    return 0;
}