#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[5];

    numbers[0] = 3;
    numbers[2] = 5;
    numbers[4] = 4;
    numbers[3] = 6;
    numbers[1] = 1;

    printf("\n Elemento #1: %d", numbers[0]);
    printf("\n Elemento #2: %d", numbers[1]);
    printf("\n Elemento #3: %d", numbers[2]);
    printf("\n Elemento #4: %d", numbers[3]);
    printf("\n Elemento #5: %d", numbers[4]);

    printf("\n\n Suma:");
    int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    printf("\n La suma es %d", sum);

    return 0;
}
