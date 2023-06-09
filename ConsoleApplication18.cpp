#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::for_each(numbers.begin(), numbers.end(), [](int& num) {
        if (num % 2 != 0) {
            num *= 3;
        }
        });

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
