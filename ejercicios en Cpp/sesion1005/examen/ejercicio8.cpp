#include <iostream>

using namespace std;

int main()
{
    const int tamanoArreglo = 10;
    int numeros[tamanoArreglo];
    int contador = 0;
    int pares = 0;
    int impares = 0;

    cout << "Ingrese 10 numeros enteros:" << endl;

    while (contador < tamanoArreglo)
    {
        cout << "Numero " << contador + 1 << ": ";
        cin >> numeros[contador];
        if (numeros[contador] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        contador++;
    }

    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}