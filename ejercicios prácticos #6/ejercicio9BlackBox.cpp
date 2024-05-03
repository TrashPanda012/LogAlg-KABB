#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;

    // Solicitar al usuario ingresar las dimensiones de la primera matriz
    cout << "Ingrese el numero de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el numero de columnas de la primera matriz: ";
    cin >> columnas1;

    // Solicitar al usuario ingresar las dimensiones de la segunda matriz
    cout << "Ingrese el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> columnas2;

    // Verificar si las dimensiones son compatibles para la multiplicación de matrices
    if (columnas1 != filas2) {
        cerr << "Error: Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
        return 1; // Salir del programa con código de error
    }

    // Declarar las matrices y solicitar al usuario ingresar los elementos de cada matriz
    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int matrizResultado[filas1][columnas2];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas1; ++j) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Realizar la multiplicación de matrices
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < columnas1; ++k) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Mostrar la matriz resultado como salida
    cout << "La matriz resultado de la multiplicacion es:" << endl;
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}