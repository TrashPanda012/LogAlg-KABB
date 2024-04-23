#include<stdio.h>

int main(int argc, char const *argv[])
{
    float numbers[10];
    numbers [0] = 12;
    numbers [1] = 1.68;
    numbers [2] = 2.680;
    numbers [3] = 3.5;
    numbers [4] = 1512.9985463255;
    numbers [5] = 3.14151617;
    numbers [6] = 45.8297;
    numbers [7] = 12.35;
    numbers [8] = 74.66;
    numbers [9] = 285.89;

    printf("\n Elemento #1: %f", numbers [0]);
    printf("\n Elemento #2: %f", numbers [1]);
    printf("\n Elemento #3: %f", numbers [2]);
    printf("\n Elemento #4: %f", numbers [3]);
    printf("\n Elemento #5: %f", numbers [4]);
    printf("\n Elemento #6: %f", numbers [5]);
    printf("\n Elemento #7: %f", numbers [6]);
    printf("\n Elemento #8: %f", numbers [7]);
    printf("\n Elemento #9: %f", numbers [8]);
    printf("\n Elemento #10: %f", numbers [9]);

    printf("\n\n Suma:");
    float sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] + numbers[5] + numbers[6] + numbers[7] + numbers[8] + numbers[9];
    printf("\n La suma del arreglo es igua a: %f", sum);

    return 0;
}
