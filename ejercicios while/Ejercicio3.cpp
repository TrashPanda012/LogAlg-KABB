#include <iostream>
using namespace std;

int suma = 0, numero = 1;

int main(int argc, char const *argv[])
{
    while (numero <= 100)
    {
        suma += numero * numero;
        numero ++;
    }
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es igual a: " << suma << endl;
    return 0;
}
