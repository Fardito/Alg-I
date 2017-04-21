#include <iostream>
#include "cadena caracteres.h"
using namespace std;

int main()
{
    char * ptr = new char;
    //cadena A;
    char elemento;
    cout << "Ingrese elemento" << endl;
    cin >> elemento;
    *ptr = elemento;
    cout << ptr << endl;
    delete [] ptr;
    //A.agregar(elemento);
    //A.imprimir();
    return 0;
}
