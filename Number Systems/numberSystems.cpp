#include <iostream>

int main ()
{
    int decimal = 15;
    int octal = 017;
    int hexadecimal = 0x0f;
    int binary = 0b00001111;

    std::cout << "Number 1 is: " << decimal << std::endl;
    std::cout << "Number 2 is: " << octal << std::endl;
    std::cout << "Number 3 is: " << hexadecimal << std::endl;
    std::cout << "Number 4 is: " << binary << std::endl;

}