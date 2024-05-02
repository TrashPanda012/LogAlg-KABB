#include <iostream>
using namespace std;

void imprimirNum(int n);
int n;
int suma = 0;

int main()
{
    cout << "Ingrese un numero natural n: ";
    cin >> n;
    imprimirNum(n);
    return 0;
}

void imprimirNum(int n){
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << suma << endl;
}