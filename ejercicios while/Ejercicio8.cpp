#include <iostream>
using namespace std;

int vector1[100], vector2[100], vector3[100];
int longitud, i;

int main(int argc, char const *argv[])
{
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

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
        vector3[i] = vector1[i] * vector2[i];
        i++;
    }

    cout << "\nEl resultado de la multiplicacion del primer vector con el segundo vector es igual a: " << endl;
    i = 0;
    while (i < longitud)
    {
        cout << vector3[i] << endl;
        i++;
    }

    return 0;
}