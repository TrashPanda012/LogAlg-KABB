#include <iostream>

int main() {
    const int arrayLength = 3; // Set the array length

    int array1[arrayLength];
    int array2[arrayLength];
    int productArray[arrayLength];

    std::cout << "Enter " << arrayLength << " integer values for the first array: ";
    for (int i = 0; i < arrayLength; i++) {
        std::cin >> array1[i];
    }

    std::cout << "Enter " << arrayLength << " integer values for the second array: ";
    for (int i = 0; i < arrayLength; i++) {
        std::cin >> array2[i];
    }

    // Calculate the product of the two arrays
    for (int i = 0; i < arrayLength; i++) {
        productArray[i] = array1[i] * array2[i];
    }

    std::cout << "The product of the arrays is: ";
    for (int i = 0; i < arrayLength; i++) {
        std::cout << productArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}