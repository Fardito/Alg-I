#include "cadenas.h"
#include <iostream>

using namespace std;

cadenas::cadenas(){
    //Inicializa las variables
    ptr = NULL;
    ultimo = NULL;
    tam = 0;
    //ctor
}

cadenas::nodo * cadenas::nuevonodo(const char dato,nodo *& puntero) const{
    //Crea un nuevo nodo y devuelve el puntero al mismo
    nodo * aux = new nodo;
    aux->elemento = dato;
    aux->sig = puntero;
    return aux;
}

void cadenas::agregar(const char dato){
    //Agrega al incio de la lista
    if (ptr == NULL) {
        ptr = nuevonodo(dato,ptr);
        ultimo = ptr;
    }
    else{
        ptr = nuevonodo(dato,ptr);
    }
    tam++;
}

void cadenas::insertar(const unsigned int posicion,const char dato){
    //Agrega en la lista en una posicion determinada
    if ((posicion <= (tam + 1)) && (posicion != 0)){
        if (posicion == 1){
            agregar(dato);
        }
        else{
            nodo * aux;
            aux = ptr;
            unsigned int contador = posicion;
            while ((contador - 1) != 1) {
                aux = aux->sig;
                contador--;
            }
            aux->sig = nuevonodo(dato,aux->sig);
            tam++;
            if (posicion == tam) {
                ultimo = aux->sig;
            }
        }
    }
}

void cadenas::concatenar(const cadenas & otracadena){ // Preguntar que hago con otracadena
    //a la primera lista le agrega la segunda al final
    ultimo->sig = otracadena.ptr;
    ultimo = otracadena.ultimo;
    tam = tam + otracadena.tam;
}

bool cadenas::iguales(const cadenas & otracadena) const{
    //compara dos cadenas y dice si son iguales
    if (tam == otracadena.tam){
        nodo * primercadena; // Preguntar lo de new nodo
        nodo * segundacadena;
        primercadena = ptr;
        segundacadena = otracadena.ptr;
        while ((primercadena != NULL) && (primercadena->elemento == segundacadena->elemento)){
            primercadena = primercadena->sig;
            segundacadena = segundacadena->sig;
        }
        if (primercadena == NULL){
            return true;
        }
        else return false;
    }
    else return false;
}

void cadenas::reversa(){
    // devuelve la cadena invertida
    nodo * aux = ptr->sig;
    ultimo = ptr;
    ptr->sig = NULL;
    nodo * cursor;
    while (aux != NULL){
        cursor = aux;
        aux = aux->sig;
        cursor->sig = ptr;
        ptr = cursor;
    }
}

unsigned int cadenas::repeticiones(const char dato) const{
    // Dado un elemento devuelve la cantidad de veces que esta en la lista
    unsigned int repetido = 0;
    if (ptr != NULL) {
        nodo * aux = ptr;
        while (aux != NULL){
            if (aux->elemento == dato){
                repetido++;
            }
            aux = aux->sig;
        }
    }
    return repetido;
}

void cadenas::duplicar(){
    //duplica cada elemento de la lista: abc ---> aabbcc
    nodo * aux = ptr;
    while (aux != NULL){
        nodo * duplica = new nodo;
        duplica->elemento = aux->elemento;
        duplica->sig = aux->sig;
        aux->sig = duplica;
        aux = duplica->sig;
        duplica = NULL; // creo que no hace falta, pero por las dudas...
    }
}

bool cadenas::capicua() const{
    // verifica si la cadena es capicua
    char * block = new char[tam];
    nodo * aux = ptr;
    for (unsigned int i = 0; i< tam; i++){
        block[i] = aux->elemento;
        aux = aux->sig;
    }
    bool palindrome = true;
    unsigned int inicio = 0, fin = tam - 1;
    while ((inicio < fin ) && palindrome) {
        if (block[inicio] != block[fin]){
            palindrome = false;
        }
        inicio++;
        fin--;
    }
    delete [] block;
    return palindrome;
}

int cadenas::longitud() const{
    //Cantidad de nodos de la lista
    return tam;
}

bool cadenas::es_vacia() const{
    //Verifica si el puntero es NULL
    return (ptr == NULL);
}

void cadenas::imprimir() const{
    //Imprime todos los caracteres de la lista
    nodo * aux;
    aux = ptr;
    while (aux != NULL) {
        cout << aux->elemento << endl;
        aux = aux->sig;
    }
    delete [] aux;
    }

cadenas::~cadenas(){
    //Libera la memoria
    nodo * aux;
    while (ptr != NULL) {
        aux = ptr;
        ptr = ptr->sig;
        delete [] aux;
    }
    ptr = NULL;
}
