#include <iostream>

int main() {
    std::string string_value;
    std::cin >> string_value;
    double value = std::stod(string_value);
    if(value > 0.0){
        std::cout << "positive" << std::endl;
    }
    else if(value < 0.0){
        std::cout << "negative" << std::endl;
    }
    else{
        std::cout << "zero" << std::endl;
    }
    return 0;
}