#include <iostream>
using namespace std;

int filas1, columnas1, filas2, columnas2;

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

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++)
    {
        for (int j = 0; j < columnas1; j++)
        {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz2[i][j];
        }
    }
    
    for (int i = 0; i < filas1; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            matriz3[i][j] = 0;
            for (int k = 0; k < columnas1; k++)
            {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
            
        }
        
    }

    cout << "La matriz resultado de la multiplicacion es:" << endl;
    for (int i = 0; i < filas1; ++i) 
    {
        for (int j = 0; j < columnas2; ++j) 
        {
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
