#include <iostream>
using namespace std;

void sumaCuadrados(int suma);
int suma = 0;

int main()
{
    sumaCuadrados(suma);
    return 0;
}

void sumaCuadrados(int suma){
    for (int i = 0; i <= 100; i++)
    {
        suma += i * i; //Se suma el cuadrado de cada numero
    }
    cout << "La suma del cuadrado de cada numero es igual a: " << suma << endl;
}