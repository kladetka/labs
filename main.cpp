#include "Menu.h"

int main()
{
    try
    {
        menu();
    }
    catch (std::exception& e)
    {
        std::cout << "Error: " << e.what();
    }

    return 0;
}