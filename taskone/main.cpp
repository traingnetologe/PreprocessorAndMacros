#include <iostream>
#define PRINTLINE(text) std::cout << text << std::endl;
#define PRINT(text) std::cout << text;
#define END  "std::endl"
#define MODE 1

#ifndef MODE
#error not compilation
#endif

int add(int number1, int number2)
{
    return number1 + number2;
}

int main()
{
    #if MODE == 1 

   PRINTLINE("I`m working in combat mode:");
   int number1{0};
   int number2{0};

    PRINT("Input number one: ");
    std::cin >> number1;

    PRINT("Input number tow: ");
    std::cin >> number2;

    PRINT("The result of addition: ");
    PRINT(add(number1, number2));
    
    #else
        PRINT("Unknown mode. Complitoin of the work.")
    #endif

    return 0;
}