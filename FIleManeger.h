#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "main.h"
#include <vector>
#include <memory>
#include <fstream>

void saveAll(const std::vector<std::unique_ptr<Student>>& students)
{
    std::ofstream out("students.txt");
    if (!out) throw std::runtime_error("File error");

    for (auto& s : students)
        s->save(out);
}

void loadAll(std::vector<std::unique_ptr<Student>>& students)
{
    std::ifstream in("students.txt");
    if (!in) return;

    while (!in.eof())
    {
        auto s = std::make_unique<Student>();
        s->load(in);

        if (in)
            students.push_back(std::move(s));
    }
}

#endif