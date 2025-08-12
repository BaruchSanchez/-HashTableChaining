#include <iostream>
#include "HashSet.h"

using namespace std;

int main() 
{
    HashSet<int> miSet(10); 

    cout << "Agregando elementos..." << endl;
    miSet.Add(5);
    miSet.Add(10);
    miSet.Add(15);
    miSet.Add(5); 

    cout << "Elementos actuales: " << endl;
    miSet.Print();

    cout << "Eliminando 10..." << endl;
    miSet.Remove(10);

    cout << "Elementos despues de eliminar: " << endl;
    miSet.Print();

    if (miSet.Contains(15)) 
    {
        cout << "15 si esta en el conjunto" << endl;
    }
    else 
    {
        cout << "15 no esta en el conjunto" << endl;
    }

    return 0;
}