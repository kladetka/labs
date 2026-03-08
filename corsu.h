//
// Created by Користувач on 08.03.2026.
//

#ifndef UNTITLED_CORSU_H
#define UNTITLED_CORSU_H

#include <iostream>
#include <string>
class Curse
{
    int number;
    std::string name;
public:
    Curse(int n)
        : number(n) {std ::cout << "creat constructor "<<"namber:"<<n<<std::endl;};

    Curse(std::string nam)
    {
        this->name = nam;
        std :: cout << "name: "<< nam << std::endl;
    }
    Curse(const Curse& c)
    {
        number = c.number;
       std :: cout << "coppy constructor:" << number << std::endl;
    }

    void showinfo() const
    {
        std :: cout << "name: "<< name<< "number:" << number<<std::endl;
    }

    ~Curse(){std ::cout << "destructor"<<std::endl;};
};

#endif //UNTITLED_CORSU_H