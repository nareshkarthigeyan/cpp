#include <iostream>

int main ()
{
    // There are three ways to initialize a int.
    // Braced Initialization:
    int num {}; //initialized to zero.
    int num2 {23}; // Inintialized to 23
    int num3; // Initialized to a garvage value or 0
    int sum {num + num2}; // can be initialized to an expression returning an int
    // int sum4 {39.4}; // this will result in an error since its a float, The number does not truncate.

    //FuNctional Initialization:
    // int Num (23.55); //initialized to 23 truncating the decinak vakye.
    int Num2 (22); // Inintialized to 23
    int Sum (87 + Num2); 

    //Assignment Initialization:
    int NUM = 99;
    int NUM3 = 199 - NUM;
   // int TRUNCNUM = 123.32;
   std::cout << num << num2 << num3 << sum << Num2 << Sum << NUM << NUM3 << std::endl;
   return 0;
}