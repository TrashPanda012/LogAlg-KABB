#include <iostream>
using namespace std;

int numero, suma, contador;

int main(int argc, char const *argv[])
{
    cout << "Ingrese un numero natural: ";
    cin >> numero;

    if (numero > 0)
    {
        while (contador <= numero)
        {
            suma += contador;
            contador += 1;
        }
        cout << "La suma de los numeros hasta " << numero << " es igual a: " << suma << endl;
    }
    else
    {
        cout << "El numero ingresado no es valido" << endl;
    }

    return 0;
}
