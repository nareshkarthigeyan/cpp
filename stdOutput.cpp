#include <iostream>
#include <string>

int main(){
    // std::cout << "Hello, World!" << std::endl;
    // std::cerr << "Error!" << std::endl;
    // std::clog << "Log" << std::endl;

    // // << is used to insert a data into an output stream
    // // >> used to "extract" data from an output stream
    // int age;
    // std::cout << "What is your age: ";
    // std::cin >> age;
    // std::cout << "Hello, you are " << age << " years old!" << std::endl;
    
    // // got get inputs that include spaces, line, etc, use std::getline()
    

    std::string full_name;
    int age;
    std::cout << "Please enter your full name: " << std::endl;
    std::getline(std::cin, full_name);
    std::cout << "Age: ";
    std::cin >> age;
    std::cout << "Hello, " << full_name << "! You are " << age << " years old!" << std::endl;
    return 0;
}