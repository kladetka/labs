
#include "main.h"
#include "Course.h"
#include "teacher.h"
#include "human.h"
#include <iostream>
#include "UniversityPerson.h"

int main ()
{

    Student s1("Sasha",17,"Male","ips","Student",100,"143",2008,"OOP",5);

    Human* h = new Student("alex",20,"Male","ips","Student",20,"143",2006,"OOP",5);
    h->info();

    Human* h2 = new Student("Oleg",18,"Male","it","Student",90,"144",2007,"Math",4);

    h2->print();
    h2->work();

    Student s5("Ivan",19,"Male","math","Student",85,"145",2005,"Physics",3);
    s5.show(s5);

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

    delete h;
    delete h2;
    return 0;
}