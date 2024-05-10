#include <iostream>
using namespace std;

int filas, columnas;
int i, j;

int main(int argc, char const *argv[])
{
    cout << "\nIngrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "\nIngrese el numero de columnas de la matriz: ";
    cin >> columnas;
    int matriz[filas][columnas];
    int matrizTranspuesta[columnas][filas];

    cout << "\nIngrese los elementos de la matriz: " << endl;
    i = 0;
    while (i < filas)
    {
        j = 0;
        while (j < columnas)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    while (i < columnas)
    {
        j = 0;
        while (j < filas)
        {
            matrizTranspuesta[i][j] = matriz[j][i];
            j++;
        }
        i++;
    }

    cout << "\nLa matriz transpuesta es: " << endl;
    i = 0;
    while (i < columnas)
    {
        j = 0;
        while (j < filas)
        {
            cout << matrizTranspuesta[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
