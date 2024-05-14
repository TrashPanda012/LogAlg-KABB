#include <iostream>
using namespace std;

#define TAMANO 5
int numeros[TAMANO];
int i;

int main()
{

    cout << "Ingrese " << TAMANO << " números enteros:" << endl;
    i = 0;
    while (i < TAMANO)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> numeros[i];
        i++;
    }

    bubbleSort(numeros, TAMANO);

    cout << "Arreglo ordenado:" << endl;
    for (int i = 0; i < TAMANO; ++i)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // Intercambiar los elementos si están en el orden incorrecto
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}