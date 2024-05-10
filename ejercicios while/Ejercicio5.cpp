#include <iostream>
using namespace std;

int aprobados, reprobados, sumaNotas, nota, promedio;

int main(int argc, char const *argv[])
{
    int i = 0;
    while (i < 8)
    {
        cout << "Ingrese la nota del alumno " << i + 1 << ": ";
        cin >> nota;
        if (nota >= 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
        sumaNotas += nota;
        i++;
    }
    promedio = sumaNotas / 8;
    cout << "\nEl promedio general del grupo es: " << promedio << endl;
    cout << "La cantidad de aprobados es: " << aprobados << endl;
    cout << "La cantidad de reprobados es: " << reprobados << endl;
    return 0;
}
