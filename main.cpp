#include <iostream>
#include "cadenas.h"
using namespace std;

int main()
{
    cadenas A,B;
    //char dato;
    //int pos;
    //cout << "ingrese un char" << endl;
    //cin >> dato;
    //A.agregar(dato);
    A.agregar('c');
    A.agregar('j');
    A.agregar('j');
    A.agregar('c');
    //A.reversa();
    //A.duplicar();
    if (A.capicua())
        cout << "es capicua" << endl;
    else
        cout << "no es capicua" << endl;
    A.imprimir();
    //cout << "la cantidad de j es: " << A.repeticiones('j') << endl;
    //cout << "Ingrese dato y posicion a insertar" << endl;
    //cin >> dato >> pos;
    //A.insertar(pos,dato);
    //cout << " " << endl; //<----  Me hace un espacio para ver mejor la ejecucion
    //B.agregar('j');
    //B.agregar('j');
    //B.agregar('z');
    //B.agregar('s');
    //if (A.iguales(B))
    //    cout << "iguales" << endl;
    //else
    //    cout << "distintas" << endl;
    //A.imprimir();
    //cout << "La longitud es: " << A.longitud() << endl;
    return 0;
}
