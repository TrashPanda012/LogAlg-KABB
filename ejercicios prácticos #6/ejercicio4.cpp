#include <iostream>
using namespace std;

#define numEstudiantes 10;
float nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, nota9, nota10, suma, promedio;

int main()
{
    cout << "\n Ingrese la nota del primer estudiante: "; 
    cin >> nota1;
    cout << "\n Ingrese la nota del segundo estudiante: "; 
    cin >> nota2;
    cout << "\n Ingrese la nota del tercer estudiante: "; 
    cin >> nota3;
    cout << "\n Ingrese la nota del cuarto estudiante: "; 
    cin >> nota4;
    cout << "\n Ingrese la nota del quinto estudiante: "; 
    cin >> nota5;
    cout << "\n Ingrese la nota del sexto estudiante: "; 
    cin >> nota6;
    cout << "\n Ingrese la nota del septimo estudiante: "; 
    cin >> nota7;
    cout << "\n Ingrese la nota del octavo estudiante: "; 
    cin >> nota8;
    cout << "\n Ingrese la nota del noveno estudiante: "; 
    cin >> nota9;
    cout << "\n Ingrese la nota del decimo estudiante: "; 
    cin >> nota10;

    suma = nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 + nota8 + nota9 + nota10;
    promedio = suma / numEstudiantes;

    cout << "\n El promedio general de la seccion es igual a: " << promedio << endl;
    return 0;
}