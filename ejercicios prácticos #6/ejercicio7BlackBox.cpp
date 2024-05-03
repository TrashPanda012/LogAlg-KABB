#include <iostream>

int main() {
    const int arrayLength = 10; // Set the array length

    int array1[arrayLength];
    int array2[arrayLength];
    int sumArray[arrayLength];

    std::cout << "Enter " << arrayLength << " integers for the first array: ";
    for (int i = 0; i < arrayLength; i++) {
        std::cin >> array1[i];
    }

    std::cout << "Enter " << arrayLength << " integers for the second array: ";
    for (int i = 0; i < arrayLength; i++) {
        std::cin >> array2[i];
    }

    // Calculate the sum of both arrays
    for (int i = 0; i < arrayLength; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    std::cout << "The sum of the arrays is: ";
    for (int i = 0; i < arrayLength; i++) {
        std::cout << sumArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}