#include<iostream>
using namespace std;

void imprimirNum();

int main()
{
    imprimirNum();
    return 0;
}

void imprimirNum(){
    for(int i=100; i>=1; i--){
        if (i %2 != 0)
        {
        cout << i << endl;
        }
    }
}
