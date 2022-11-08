#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <coroutine>

#include "pch.h"

class Cablog
{
    private:
    HANDLE _hConsole;

    public:
    Cablog();
    void info(std::string input);
    void warn(std::string input);
    void error(std::string input);
    void empt();
};

// void info(std::string input )
// {
//     HANDLE hconsole;
//         int k = 240;
//     hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

//     SetConsoleTextAttribute(hconsole, k);        

//     std::cout << "Info:";

//     SetConsoleTextAttribute(hconsole, 15);

//     std::cout << " " << input << "\n";
// }
// void warn(std::string input )
// {
//     HANDLE hconsole;
//         int k = 224;
//     hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

//     SetConsoleTextAttribute(hconsole, k);        

//     std::cout << "Warn:";

//     SetConsoleTextAttribute(hconsole, 15);

//     std::cout << " " << input << "\n";
// }
// void error(std::string input )
// {
//     HANDLE hconsole;
//         int k = 79;
//     hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

//     SetConsoleTextAttribute(hconsole, k);        

//     std::cout << "Error:";

//     SetConsoleTextAttribute(hconsole, 15);

//     std::cout << " " << input << "\n";
// }
// void empt()
// {
//     std::cout << std::endl;
// }

