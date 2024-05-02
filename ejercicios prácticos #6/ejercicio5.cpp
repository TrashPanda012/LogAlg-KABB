#include <iostream>
using namespace std;

#define numEstudiantes 8
float notas[numEstudiantes];
float suma = 0;
float promedio;
int aprobados = 0;
int reprobados = 0;
void pedirNotas();

int main(int argc, char const *argv[])
{
    pedirNotas();
    promedio = suma / numEstudiantes;
    cout << "\nCantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio General del grupo: " << promedio << endl;
    return 0;
}

void pedirNotas(){
    for (int i = 0; i < numEstudiantes; i++)
    {
        cout << "Ingrese la nota del estudiante " << (i + 1) << ":";
        cin >> notas[i];
        suma += notas[i];

        if (notas[i] >= 70)
        {
            aprobados++;
        } else{
            reprobados++;
        }
    }
}