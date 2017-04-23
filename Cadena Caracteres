#ifndef CADENAS_H
#define CADENAS_H
#include <iostream>

using namespace std;

class cadenas
{
    public:
        cadenas();
        void imprimir() const;
        void agregar(const char dato);
        void insertar(const unsigned int posicion,const char dato);
        int longitud() const;
        bool es_vacia() const;
        void concatenar(const cadenas & otracadena);
        virtual ~cadenas();
        bool iguales(const cadenas & otracadena) const;
        bool capicua() const;
        void reversa();
        unsigned int repeticiones(const char dato) const;
        void duplicar();

    protected:

    private:
        struct nodo{
        char elemento;
        nodo * sig = NULL;
        };

        nodo * ptr; //Apunta al inicio de la lista
        nodo * ultimo; //Apunta al ultimo de la lista
        unsigned int tam;

        nodo * nuevonodo(const char dato,nodo *& puntero) const;

};

#endif // CADENAS_H
