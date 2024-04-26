/*Realice un programa que permita:
1. Ingresar x cantidad de numeros
2. Calcular la suma de dichos numeros
3. Mostrar todos los numeros
4. Salir*/

/*Uso de switch - Recursividad*/
#include <iostream>
using namespace std;

/*Prototipo de funcion*/
void agregarNum(int num);
int sumar();
void menu();
/*Constante*/
#define MAX 8
/*Variables global*/
int nums[MAX];
int pos = 0; //posicion del elemento en el arreglo

void agregarNum(int num){
    if(pos<MAX)
    {
        nums[pos] = num;
        pos++;
    } 
    else 
    {
        cout << "No se puede agregar el numero\n";
    }
}

int sumar(int suma, int ultElem){
    if(ultElem == -1 )
    {
        return suma;
    }
    suma = suma + nums[ultElem];
    sumar(suma, ultElem - 1);
}

void menu(){
    int op, num;
    int suma = 0;
    cout << "\n1. Agregar elemento.\n"<<endl;
    cout << "2. Sumar. \n"<<endl;
    cout << "3. Mostrar. \n"<<endl;
    cout << "4. Salir. \n"<<endl;
    cin >> op;

    switch (op)
    {
    case 1:
        system ("cls");
        cout << "Dime un numero: \n"<<endl;
        cin >> num;
        system ("cls");
        cout << "El numero agregado fue: " <<num<<endl; 
        agregarNum(num);
        break;
    case 2:
        system ("cls");
        cout << "La suma es: \n"<< sumar(suma, pos - 1);
        break;
    case 3:
        break;
    case 4:
        break;
    
    default:
        system ("cls");
        cout << "No existe la opcion \n" <<endl;
        break;
    }
    menu();
}

int main()
{
    menu();    
    return 0;
}
