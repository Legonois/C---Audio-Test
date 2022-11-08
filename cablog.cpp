#include "cablog.h"

HANDLE Cablog::_hConsole;

Cablog::Cablog()
{

    _hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

}
void Cablog::info(std::string input)
{
    int k = 240;
    SetConsoleTextAttribute(_hConsole, k);        

    std::cout << "Info:";

    SetConsoleTextAttribute(_hConsole, 15);

    std::cout << " " << input << "\n";
}
void Cablog::warn(std::string input)
{

    int k = 224;

    SetConsoleTextAttribute(_hConsole, k);
    std::cout << "Warn:";

    SetConsoleTextAttribute(_hConsole, 15);

    std::cout << " " << input << "\n";
}
void Cablog::error(std::string input)
{
    int k = 79;
    SetConsoleTextAttribute(_hConsole, k);        

    std::cout << "Info:";

    SetConsoleTextAttribute(_hConsole, 15);

    std::cout << " " << input << "\n";
}
void Cablog::empt()
{

    std::cout << "\n";

}