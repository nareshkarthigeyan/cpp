#include <iostream>

int singedAndUnsigned (void)
{
    int value1 {11};
    int value2 {-200}; //4 bytes

    std::cout << "size of  1: " << sizeof(value1) << std::endl;
    std::cout << "size of 2: " << sizeof(value2) << std::endl;

    unsigned int value3 = 243432;
    // unsigned int value3 = -2323423 - compiler error
    std::cout << "size of 3: " << sizeof(value3) << std::endl;
    short int value4 = 11; // 2 bytes
    long int value5 = 8456298435762; //4 or 8 bytes
    long long int value6 = 94652834576834568; // 8 bytes
    unsigned long long int longest = 946528345768345680;
    std::cout << "size of 3: " << sizeof(value4) << std::endl;
    std::cout << "size of 3: " << sizeof(value5) << std::endl;
    std::cout << "size of 3: " << sizeof(value6) << std::endl;
    std::cout << "size of 3: " << sizeof(longest) << std::endl;

    return 0;
}