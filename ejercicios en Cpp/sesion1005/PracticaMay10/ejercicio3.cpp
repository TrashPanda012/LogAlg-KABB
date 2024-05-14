#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number, fact = 1;
    cout << "Dime un numero: ";
    cin >> number;

    if (number > 0)
    {
        while (number != 0)
        {
            fact *= number;
            number--;
        }
        cout << "El factorial es igual a " << fact << endl;
    }
    else
    {
        cout << "Debe ingresar un numero positivo" << endl;
    }
    return 0;
}
