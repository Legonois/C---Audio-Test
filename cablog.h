#include <stdio.h>
#include <string>
#include <iostream>
#include <coroutine>

#include "pch.h"


namespace cablog
{
    void info(std::string input )
    {
        
        

        HANDLE hconsole;
            int k = 240;
        


        hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hconsole, k);        

        std::cout << "Info:";

        SetConsoleTextAttribute(hconsole, 15);

        std::cout << " " << input << "\n";

        
    }


}