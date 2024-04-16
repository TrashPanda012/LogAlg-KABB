#include <stdio.h>

/*prototipo de funcion*/
int suma(int num1, int num2);

/*funcion*/
int suma(int num1, int num2)
{
    return num1 + num2;
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("\n Dime el primer valor: ");
    scanf("%d", &num1);
    printf("\n Dime el segundo valor: ");
    scanf("%d", &num2);
    printf("\n El resultado de la suma de %d + %d es igual a %d ", num1, num2, suma(num1, num2));
    return 0;
}
