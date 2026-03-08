//
// Created by Користувач on 08.03.2026.
//

#ifndef UNTITLED_TEACHER_H
#define UNTITLED_TEACHER_H

#include <iostream>
#include <string>
class Teacher
{
    std :: string name;
    int stash;
public:

    Teacher(std::string na, int s)
        : name{na}, stash{s}{std ::cout << "creat constructor "<<"name :"<< na<<"stash:"<<stash<<std::endl;};
    Teacher (Teacher && t)
    {
          name = std ::move(t.name);
            stash = t.stash;
    }

    ~Teacher(){std ::cout << "destructor"<<std::endl;};
};
#endif //UNTITLED_TEACHER_H