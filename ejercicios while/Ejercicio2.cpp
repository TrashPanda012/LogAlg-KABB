#include <iostream>
using namespace std;

int numero = 99;

int main(int argc, char const *argv[])
{
    cout << "Numeros impares en orden descendente entre 1 y 100";
    while (numero >= 1)
    {
        cout << numero << endl;
        numero = numero - 2;
    }
    return 0;
}
