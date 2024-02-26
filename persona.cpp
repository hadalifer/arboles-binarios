#include "persona.h"
#include<iostream>
using namespace std;
persona::persona(int _edad,string _nombre) {
	edad = _edad;
	nombre = _nombre;
}

void persona::set_edad(int _edad) {
	edad = _edad;
}
void persona::set_nombre(string _nombre) {
	nombre = _nombre;
}
int persona::get_edad() {
	return edad;
}
string persona::get_nombre() {
	return nombre;
}
void persona::mostrar_persona() {
	cout << "la edad de " << nombre << " es " << edad << " anos.\n";
}

