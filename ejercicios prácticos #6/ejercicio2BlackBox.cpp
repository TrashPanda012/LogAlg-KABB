#include <iostream>

int main() {
    for (int i = 100; i >= 1; i--) {
        if (i % 2!= 0) {
            std::cout << i << " ";
        }
    }

    return 0;
}