#include <iostream>
using namespace std;

int numero = 100, suma = 0;

int main(int argc, char const *argv[])
{
    while (numero <= 200)
    {
        if (numero % 2 == 0)
        {
            suma += numero;
        }
        numero++;
    }
    cout << "La suma de los numeros pares entre 100 y 200 es igual a: " << suma;
    return 0;
}
