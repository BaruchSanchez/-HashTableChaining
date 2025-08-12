#include <iostream>
#include "HashSet.h"
using namespace std;

int main() {
    // Crear un HashSet de enteros
    HashSet<int> conjunto(10);

    // Agregamos elementos
    conjunto.Add(5);
    conjunto.Add(10);
    conjunto.Add(15);

    cout << "Elementos en el conjunto:" << endl;
    conjunto.Print();

    // Intentatamos agregar un elemento repetido
    cout << "Agregando un elemento repetido (10)..." << endl;
    conjunto.Add(10);
    conjunto.Print();

    // Verificar si un elemento existe
    cout << "¿El elemento 15 esta? " 
         << (conjunto.Contains(15) ? "Sí" : "No") << endl;

    // Eliminar un elemento
    cout << "Eliminando el elemento 10..." << endl;
    conjunto.Remove(10);
    conjunto.Print();

    return 0;
}
