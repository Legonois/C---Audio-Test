#include "cablog.h"

Cablog::Cablog()
{

    _hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

}

void Cablog::info2(std::string input)
{
    int k = 240;
    SetConsoleTextAttribute(_hConsole, k);        

    std::cout << "Info:";

    SetConsoleTextAttribute(_hConsole, 15);

    std::cout << " " << input << "\n";
}