#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i * i;
    }

    std::cout << "The sum of the squares of the numbers between 1 and 100 is: " << sum << std::endl;

    return 0;
}