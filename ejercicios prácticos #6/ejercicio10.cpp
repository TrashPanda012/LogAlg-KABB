#include <iostream>
using namespace std;

int filas, columnas;

int main(int argc, char const *argv[])
{
    cout << "\nIngrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "\nIngrese el numero de columnas de la matriz: ";
    cin >> columnas;
    int matriz[filas][columnas];
    int matrizTranspuesta[columnas][filas];

    cout << "\nIngrese los elementos de la matriz: " << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz[i][j];
        }
        
    }
    
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            matrizTranspuesta[i][j] = matriz[j][i]; 
        }
        
    }
    
    cout << "\nLa matriz transpuesta es: " << endl;
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
