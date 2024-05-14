#include <iostream>
using namespace std;

#define size 10
int numeros[size];
int numMayor = numeros[0];
int i;

int main(int argc, char const *argv[])
{
    cout << "Ingrese 10 numeros: " << endl;
    i = 0;
    while (i < size)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] > numMayor)
        {
            numMayor = numeros[i];
        }
        i++;
    }
    cout << "\nEl numero mayor del arreglo es: " << numMayor;
    return 0;
}
