#include <iostream>

int balls3243 ()
{
    int decimal = 15;
    int octal = 017;
    int hexadecimal = 0x0f;
    int binary = 0b00001111;

    std::cout << "Number 1 is: " << decimal << std::endl;
    std::cout << "Number 2 is: " << octal << std::endl;
    std::cout << "Number 3 is: " << hexadecimal << std::endl;
    std::cout << "Number 4 is: " << binary << std::endl;

    char a = 65;

    std::cout << ++a <<std::endl;

    int A {11};
    float B {12.5};

    auto max = (A > B)? 'b' : 'a';

    std::cout << max << std::endl;

    return 0; 
}