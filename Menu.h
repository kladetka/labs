#ifndef MENU_H
#define MENU_H

#include "FIleManeger.h"
#include <iostream>

bool login()
{
    std::string pass;
    std::cout << "Password: ";
    std::cin >> pass;

    return pass == "1234";
}

void menu()
{
    std::vector<std::unique_ptr<Student>> students;

    try
    {
        loadAll(students);
    }
    catch (...)
    {
        std::cout << "No data file\n";
    }

    int choice;

    do
    {
        std::cout << "\n1.Admin\n2.User\n0.Exit\n";
        std::cin >> choice;


        if (choice == 1)
        {
            if (!login())
            {
                std::cout << "Wrong password\n";
                continue;
            }

            int c;
            std::cout << "\n1.Add\n2.Show\n";
            std::cin >> c;

            if (c == 1)
            {
                std::string name;
                std::cout << "Name: ";
                std::cin >> name;

                students.push_back(
                    std::make_unique<Student>(name,18,"Male","IT","Student",90,"IP-1",1000,"OOP",5)
                );

                std::cout << "Student added!\n";
            }
            else if (c == 2)
            {
                for (auto& s : students)
                    s->print();
            }
        }


        else if (choice == 2)
        {
            int userChoice;

            std::cout << "\n1.Show all\n2.Find by name\n0.Back\n";
            std::cin >> userChoice;

            if (userChoice == 1)
            {
                for (auto& s : students)
                    s->print();
            }
            else if (userChoice == 2)
            {
                std::string search;
                std::cout << "Enter name: ";
                std::cin >> search;

                bool found = false;

                for (auto& s : students)
                {
                    if (s->getName() == search)
                    {
                        s->print();
                        found = true;
                    }
                }

                if (!found)
                    std::cout << "Not found\n";
            }
        }

    } while (choice != 0);

    try
    {
        saveAll(students);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
}

#endif