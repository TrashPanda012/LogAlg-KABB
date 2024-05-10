#include <iostream>
using namespace std;

void sumaElementos(int longitud);
int longitud, i;

int main()
{
    cout << "Indique la cantidad de elementos que desea almacenar en los vectores: ";
    cin >> longitud;
    sumaElementos(longitud);
    return 0;
}

void sumaElementos(int longitud)
{
    int vector1[longitud];
    int vector2[longitud];
    int vector3[longitud];

    cout << "\nIngrese los elementos del primer vector: " << endl;
    i = 0;
    while (i < longitud)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
        i++;
    }

    cout << "\nIngrese los elementos del segundo vector: " << endl;
    i = 0;
    while (i < longitud)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
        i++;
    }

    i = 0;
    while (i <= longitud)
    {
        vector3[i] = vector1[i] + vector2[i];
        i++;
    }

    cout << "\nEl resultado de la suma del primer vector con el segundo vector es igual a: " << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << vector3[i] << endl;
    }
}