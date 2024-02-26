#pragma once
#include <iostream>
using namespace std;
class persona
{
private:
	int edad=0;
	string nombre;
public:
	persona() {};
	persona(int,string);
	void set_edad(int);
	void set_nombre(string);
	int get_edad();
	string get_nombre();
	void mostrar_persona();

	bool operator==(persona a) {
		return this->edad == a.get_edad() && this->nombre == a.get_nombre();
	}
	bool operator !=(persona a) {
		return this->edad != a.get_edad() || this->nombre != a.get_nombre();
	}
	bool operator <(persona a) {
		return this->edad < a.get_edad();
	}

	
};


