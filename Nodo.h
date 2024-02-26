#pragma once
#include <iostream>
using namespace std;
template<typename t>
class Nodo {
public:
    t dato;
    Nodo* derecha;
    Nodo* izquierda;

    Nodo(t valor) : dato(valor), derecha(nullptr),izquierda(nullptr) {}





};

