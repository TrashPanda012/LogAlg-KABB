#include <iostream>
using namespace std;

#define estudiantes 10
float notas[estudiantes];
float sumaNotas = 0;
float promedio;
void ingresarNotas();

int main()
{
    cout << "Ingrese las notas de los " << estudiantes << " estudiantes: " << endl;
    ingresarNotas();
    promedio = sumaNotas / estudiantes;
    cout << "El promedio de las notas es: " << promedio << endl;
    return 0;
}

void ingresarNotas(){
    for (int i = 0; i < estudiantes; i++)
    {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> notas[i];
        sumaNotas += notas[i];
    }
    
}