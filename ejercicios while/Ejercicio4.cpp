#include <iostream>
using namespace std;

float sumaNotas = 0, contador = 1, nota, promedio;

int main(int argc, char const *argv[])
{
    while (contador <= 10)
    {
        cout << "Escribir la nota del estudiante " << contador << ": ";
        cin >> nota;

        sumaNotas = sumaNotas + nota;
        contador++;
    }
    promedio = sumaNotas / 10;
    cout << "El promedio general de la seccion es igual a: " << promedio << endl;
    return 0;
}
