#include <iostream>
#include <iomanip>

/*
Precision:
 float - 7 digits
 double - 15 digits
 long double - 20 digits
*/

int floats ()
{       //scientific notation:
    long double num {1.02500023876876867e8L};
    std::cout << std::setprecision(20) << num << std::endl;

 return 0;
}