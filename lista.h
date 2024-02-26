#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;
template<typename t>
class lista
{
private:
    Nodo <t>* raiz;

public:
    Nodo<t>* get_raiz() {
        return raiz;
    }
    lista() : raiz(nullptr) {}
    
    void agregarNodo(t valor) {
        if (raiz == nullptr) {
            Nodo<t>* nuevoNodo = new Nodo<t>(valor);
            raiz = nuevoNodo;
      }
        if (valor < raiz->dato) {
            Nodo<t>* nuevoNodo = new Nodo<t>(valor);
            raiz->izquierda = nuevoNodo;
            
        }
        else{
            Nodo<t>* nuevoNodo = new Nodo<t>(valor);
            raiz->derecha = nuevoNodo;
        }
       
    }

    /*void eliminarNodo(t valor) {
        Nodo<t>* actual = raiz;
        Nodo<t>* anterior = nullptr;

        while (actual != nullptr && actual->dato != valor) {
            anterior = actual;
            actual = actual->siguiente;
        }

        if (actual == nullptr) {
            cout << "Elemento no encontrado." << endl;
            return;
        }

        if (anterior == nullptr) {
            raiz = actual->siguiente;
        }
        else {
            anterior->siguiente = actual->siguiente;
        }

        delete actual;
        cout << "Nodo eliminado exitosamente." << endl;
    }*/

   
};

