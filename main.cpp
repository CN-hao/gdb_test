#include <iostream>
#include <vector>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void printVector(const std::vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int x = 5;
    int* ptr = &x;
    
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    std::cout << "Factorial of " << x << " is: " << factorial(x) << std::endl;
    
    *ptr = 10;
    std::cout << "Value of x after pointer modification: " << x << std::endl;
    
    std::cout << "Vector contents: ";
    printVector(numbers);
    
    // Intentional bug for debugging practice
    int* badPtr = nullptr;
    // Uncomment the following line to create a crash for debugging
    // *badPtr = 5;
    
    return 0;
}
