#include "math_operations.h"
#include <stdexcept>

float MathOps::addition(float a, float b) {
    float sum = a + b;
    return sum;
}

float MathOps::subtraction(float a, float b) {
    float sum = a - b;
    return sum;
}

float MathOps::multiplication(float a, float b) {
    float sum = a * b;
    return sum;
}

float MathOps::division(float a, float b) {
    if (b == 0) {
        throw std::runtime_error("Runtime error occurred!");
    }
    float sum = a / b;
    return sum;
}