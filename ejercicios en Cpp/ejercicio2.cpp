#include <iostream>
using namespace std;

void evalTriangulo(int ladoA, int ladoB, int ladoC){
    if (ladoA == ladoB && ladoB == ladoC){
        cout << "Triangulo Equilatero" << endl;
    } else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC)
        cout << "Triangulo Isosceles" << endl;
}

int main(int argc, char const *argv[])
{
    int ladoA, ladoB, ladoC;
    cout << "Ingrese el lado A: ";
    cin >> ladoA;
    cout << "Ingrese el lado B: ";
    cin >> ladoB;
    cout << "Ingrese el lado C: ";
    cin >> ladoC;
    evalTriangulo(ladoA, ladoB, ladoC);
    return 0;
}
