#include <iostream>

using namespace std;

int main()
{
    const int tamano = 5;
    int numeros[tamano];
    int suma = 0;
    int contador = 0;

    cout << "Ingrese 5 numeros enteros:" << endl;

    while (contador < tamano)
    {
        cout << "Numero " << contador + 1 << ": ";
        cin >> numeros[contador];
        suma += numeros[contador];
        contador++;
    }

    cout << "La suma de los numeros es: " << suma << endl;

    return 0;
}
