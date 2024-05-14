#include <iostream>

using namespace std;

int main()
{
    const int tamano = 100;
    double calificaciones[tamano];
    int cantidadCalificaciones;
    double sumaCalificaciones = 0.0;

    cout << "Ingrese la cantidad de calificaciones que desea promediar: ";
    cin >> cantidadCalificaciones;

    if (cantidadCalificaciones <= 0 || cantidadCalificaciones > tamano)
    {
        cout << "Cantidad de calificaciones no válida." << endl;
        return 1;
    }

    int contador = 0;

    while (contador < cantidadCalificaciones)
    {
        double calificacion;
        cout << "Ingrese la calificacion " << contador + 1 << ": ";
        cin >> calificacion;
        calificaciones[contador] = calificacion;
        sumaCalificaciones += calificacion;
        contador++;
    }

    double promedio = sumaCalificaciones / cantidadCalificaciones;

    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}