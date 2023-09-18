#include <iostream>
#include <string>
#include "PrintModule.h"
#include "DigitOperation.h"
#include "ArrayOperation.h"

int main() {
    int a = 5, b = 5;
    int result1 = DigitOperation::Addition(a, b);
    int result2 = DigitOperation::Subtraction(a, b);

    int result3 = DigitOperation::LeftShift(a, 1);
    int result4 = DigitOperation::RightShift(a, 1);

    int result5 = ArrayOperation::Addition(array1, array2);
    int result6 = ArrayOperation::Subtraction(array1, array2);

    int result7 = ArrayOperation::LeftShift(array1, array2);
    int result8 = ArrayOperation::RightShift(array1, array2);

    int result9 = ArrayOperation::Get(array1, array2);
    int result10 = ArrayOperation::RandomSelection(array1, array2);

    std::cout << "\x1b[32mAddition: " << result1 << "\x1b[0m\n" << std::endl;
    std::cout << "\x1b[32mSubtraction: " << result2 << "\x1b[0m\n" << std::endl;
    std::cout << "\x1b[32mLeftShift: " << result3 << "\x1b[0m\n" << std::endl;
    std::cout << "\x1b[32mRightShift: " << result4 << "\x1b[0m\n" << std::endl;

    std::cout << "\x1b[31mAddition: " << result5 << "\x1b[0m\n" << std::endl;
    std::cout << "\x1b[31mSubtraction: " << result6 << "\x1b[0m\n" << std::endl;
    std::cout << "\x1b[31mLeftShift: " << result7 << "\x1b[0m\n" << std::endl;
    std::cout << "\x1b[31mRightShift: " << result8 << "\x1b[0m\n" << std::endl;
    std::cout << "\x1b[31mGet: " << result9 << "\x1b[0m\n" << std::endl;
    std::cout << "\x1b[31mRandomSelection: " << result10 << "\x1b[0m\n" << std::endl;
    
    PrintGreen1(" res is " + std::to_string(result1));
    PrintGreen2(" res is " + std::to_string(result2));
    PrintGreen3(" , " + std::to_string(result3));
    PrintGreen4(" , " + std::to_string(result4));

    PrintRed5(" res is " + std::to_string(result5));
    PrintRed6(" res is " + std::to_string(result6));
    PrintRed7(" , " + std::to_string(result7));
    PrintRed8(" , " + std::to_string(result8));
    PrintRed9(" , " + std::to_string(result9));
    PrintRed10(" \t " + std::to_string(result10));
   
    return 0;
}