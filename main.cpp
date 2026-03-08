
#include "main.h"
#include "corsu.h"
#include "teacher.h"

int Student::count = 0;
int main ()
{
    int age;
    std :: string name;
Student student( "sasha", 17);;
    Student student1;

Teacher teacher( "alex2 ", 15);
Curse curse (1);

    Teacher teacher1 = std::move(teacher);
    Curse curse2 = curse ;
    Curse nam("pavel");

const Student student2 ("piter", 8);
   Student::showcount();

    Student student3= student + student1;
    std :: cout <<student3 << std::endl;
    -student3;
    std :: cout << student3 << std::endl;

    Student student4;
    std ::cout <<"vvedit studenta :" << std::endl;
    std::cin >> student4;

    std::cout << student4 << std::endl;
    return 0;
}