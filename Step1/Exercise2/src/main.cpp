#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Lambda function to print numbers
    auto printNumbers = [](const std::vector<int>& nums) {
        for (int num : nums) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    };

    std::cout << "Original numbers: ";
    printNumbers(numbers);

    // Reverse the numbers
    std::reverse(numbers.begin(), numbers.end());

    std::cout << "Reversed numbers: ";
    printNumbers(numbers);

    return 0;
}
