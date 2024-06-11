#include <iostream>
#include "variables.h"
using namespace std;

// prototipo de funciones
void menu();
void addAger();
void showAges();
void start();

void menu()
{
    system("cls||clear");
    cout << "1. Ingresar edades" << endl;
    cout << "2. Mostrar edades" << endl;
    cout << "3. Mostrar edad mayor" << endl;
    cout << "4. Mostrar edad menor" << endl;
    cout << "5. Mostrar promedio de edades" << endl;
    cout << "6. Salir" << endl;
}

void addAges()
{
    system("cls||clear");
    cout << "Dime la edad: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}

void start()
{
    int option;

    while (option != 6)
    {
        menu();
        cin >> option;
        switch (option)
        {
        case 1:
            addAges();
            break;
        case 6:
        system("cls");
        cout << "Adios" << endl;
        break;
        default:
        break;
        }
    }
}

void showAges(){
    system("cls||clear");
    
}