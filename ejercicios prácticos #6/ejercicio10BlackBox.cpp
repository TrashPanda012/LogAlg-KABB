#include <iostream>
using namespace std;

int main() {
    int filas, columnas;

    // Solicitar al usuario ingresar las dimensiones de la matriz
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    // Declarar la matriz
    int matriz[filas][columnas];

    // Solicitar al usuario ingresar los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la transposición de la matriz
    int matrizTranspuesta[columnas][filas];
    for (int i = 0; i < columnas; ++i) {
        for (int j = 0; j < filas; ++j) {
            matrizTranspuesta[i][j] = matriz[j][i];
        }
    }

    // Mostrar la matriz transpuesta como salida
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < columnas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}