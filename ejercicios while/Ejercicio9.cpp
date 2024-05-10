#include <iostream>
using namespace std;

int filas1, columnas1, filas2, columnas2;
int i, j, k;

int main(int argc, char const *argv[])
{
    cout << "Ingrese el numero de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el numero de columnas de la primera matriz: ";
    cin >> columnas1;

    cout << "Ingrese el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> columnas2;

    if (columnas1 != filas2) {
        cerr << "Error: Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
        return 1;  // Salir del programa con un código de error
    }

    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int matriz3[filas1][columnas2];

    cout << "\nIngrese los elementos de la primera matriz:" << endl;
    i = 0;
    while (i < filas1)
    {
        j = 0;
        while (j < columnas1)
        {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    cout << "\nIngrese los elementos de la segunda matriz:" << endl;
    i = 0;
    while (i < filas2)
    {
        j = 0;
        while (j < columnas2)
        {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz2[i][j];
            j++;
        }
        i++;
    }
    
    i = 0;
    while (i < filas1)
    {
        j = 0;
        while (j < columnas2)
        {
            matriz3[i][j] = 0;
            k = 0;
            while (k < columnas1)
            {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            
            j++;
        }
        i++;
    }

    cout << "La matriz resultado de la multiplicacion es:" << endl;
    i = 0;
    while (i < filas1)
    {
        j = 0;
        while (j < columnas2)
        {
            cout << matriz3[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
