#include <iostream>
#include "math_operations.h"

int main() {
    float result;
    std::cout << "Enter a calculation: ";
    std::string a_str,b_str,op;
    std::cin >> a_str >> op >> b_str;
    float a_float = std::stof(a_str);
    float b_float = std::stof(b_str);
    if(op == "+"){
        result = MathOps::addition(a_float, b_float);
    }
    if(op == "-"){
        result = MathOps::subtraction(a_float, b_float);
    }
    if(op == "*"){
        result = MathOps::multiplication(a_float, b_float);
    }
    if(op == "/"){
        result = MathOps::division(a_float, b_float);
    }
    std::cout << "Result: " << result << std::endl;
    return 0;
}