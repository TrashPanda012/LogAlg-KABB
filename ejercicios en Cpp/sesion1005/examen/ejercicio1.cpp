#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0)
    {
        cout << "El numero ingresado no es positivo." << endl;
        return 1;
    }

    int contador = 1;

    while (contador <= numero)
    {
        cout << contador << " ";
        contador++;
    }

    cout << endl;

    return 0;
}