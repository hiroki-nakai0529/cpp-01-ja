#include <iostream>
#include <vector>

std::vector<int> double_elements(const std::vector<int>& numbers){
    std::vector<int> result;
    for(int element : numbers){
        result.push_back(element*2);
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> double_numbers;
    double_numbers = double_elements(numbers);

    for(int n : numbers){
        std::cout << n << " ";
    }
    for(int n : double_numbers){
        std::cout << n << " ";
    }
    return 0;
}