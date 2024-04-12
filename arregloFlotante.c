#include<stdio.h>

int main(int argc, char const *argv[])
{
    float numbers [6];

    numbers [0] = 12;
    numbers [1] = 1.68;
    numbers [2] = 2.680;
    numbers [3] = 3.5;
    numbers [4] = 1512.9985463255;
    numbers [5] = 3,14151617;
    
    printf("\n Elemento #1: %.2f", numbers [0]);
    printf("\n Elemento #2: %.2f", numbers [1]);
    printf("\n Elemento #3: %.2f", numbers [2]);
    printf("\n Elemento #4: %.2f", numbers [3]);
    printf("\n Elemento #5: %.2f", numbers [4]);
    printf("\n Elemento #6: %.2f", numbers [5]);
    return 0;
}
