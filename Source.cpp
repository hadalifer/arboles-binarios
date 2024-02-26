#include <iostream>
#include "lista.h"
#include "Nodo.h"
#include "persona.h"
using namespace std;
void mostrarlista(lista<persona> p);
void imprimirenorden(Nodo<persona>* raiz);
int main() {

    lista<persona> lista;
    int opcion;
    string nombre;
    persona a;
    int edad;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Agregar nodo persona\n";
        cout << "2. eliminar personas\n";
        cout << "3. Mostrar lista derecha\n";
        cout << "4. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        system("cls");

        switch (opcion) {
        
     
        case 1:
            
           cout << "Ingrese el nombre de la persona:\n ";
            cin >> nombre;
            cout << "Ingrese la edad de "<<nombre<<":\n";
            cin >> edad;
             a = persona(edad, nombre);
            lista.agregarNodo(a);
            system("pause");
            system("cls");
            break;
           
        case 2:
            cout << "Ingrese el nombre de la persona a eliminar:\n ";
            cin >> nombre;
            cout << "Ingrese la edad de " << nombre << ":\n";
            cin >> edad;
            a = persona(edad, nombre);
           // lista.eliminarNodo(a);
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "Lista actual: \n\n";
            mostrarlista(lista);
            system("pause");
            system("cls");
            break;

        case 4:
            cout << "Saliendo del programa.\n";
            break;

        default:
            cout << "Opcion no valida. Inténtelo de nuevo.\n";
        }

    } while (opcion != 4);
    return 0;
}
void imprimirenorden(Nodo<persona>* raiz) {
    if (raiz != nullptr) {
        imprimirenorden(raiz->izquierda);
        raiz->dato.mostrar_persona();
        imprimirenorden(raiz->derecha);

    }
}
void mostrarlista(lista<persona> p) {
    Nodo<persona>* actual = p.get_raiz();

        imprimirenorden(actual);
        actual = actual->derecha;
        cout << "\n";
    
}


