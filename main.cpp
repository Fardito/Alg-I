#include <iostream>
#include "cadenas.h"
using namespace std;

int main()
{
    char elemento;
    cadenas A;
    cout << "Ingrese elemento" << endl;
    cin >> elemento;
    A.imprimir(elemento);
    return 0;
}
