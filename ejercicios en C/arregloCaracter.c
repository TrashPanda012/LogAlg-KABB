#include<stdio.h>
/*Arreglos de las vocales*/

int main(int argc, char const *argv[])
{
    char vocals[5];

    vocals[0] = 'a';
    vocals[1] = 'e';
    vocals[2] = 'i';
    vocals[3] = 'o';
    vocals[4] = 'u';


    printf("\n Elemento #1: %s", vocals);
    printf("\n Elemento #1: %c", vocals[0]);
    printf("\n Elemento #2: %c", vocals[1]);
    printf("\n Elemento #3: %c", vocals[2]);
    printf("\n Elemento #4: %c", vocals[3]);
    printf("\n Elemento #5: %c", vocals[4]);

    return 0;
}
