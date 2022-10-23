#include <stdio.h>
#include <string>
#include <iostream>
#include <coroutine>

#include <Windows.h>

namespace cablog
{
    void info(std::string input )
    {
        std::cout << "Info: " << input << "\n";
    }


}