#include <iostream>
using namespace std;

void sumaPares();
int suma = 0;

int main()
{
    sumaPares();
    return 0;
}

void sumaPares(){
    for (int i = 100; i <= 200; i++)
    {
        if (i %2 == 0)
        {
            suma += i;
        }
    }
    cout << "El resultado de la suma es igual a: " << suma << endl;
}
