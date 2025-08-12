#include "HashTableChaining.h"
#include "HashSet.h"
#include <iostream>
using namespace std;

void HashTableChainingExample()
{
	HashTableChaining<int> myHashTableChaining = HashTableChaining<int>(4);
	myHashTableChaining.Add(39);
	myHashTableChaining.Add(252);
	myHashTableChaining.Add(40);
	myHashTableChaining.Add(0);
	myHashTableChaining.Add(24);

	myHashTableChaining.Print();


	if (!myHashTableChaining.Contains(1234))
	{
		cout << "myHashTableChaining no contiene el valor 1234, lo vamos a intentar borrar, para corroborar que no truena" << endl;

	}
	if (myHashTableChaining.Contains(40))
	{
		cout << "myHashTableChaining sí contiene el valor 40, ahora lo vamos a borrar" << endl;
		myHashTableChaining.Remove(40);
	}

	myHashTableChaining.Print();


	HashTableChaining<int> hashTableChainingExample = HashTableChaining<int>(100);

	for (int i = 0; i < 100; i++)
	{
		int randNumber = rand() % 2;
		hashTableChainingExample.Add(randNumber);
	}
	hashTableChainingExample.Print();
}

void PruebaHashSet()
{
	HashSet<int> mySet(10);

	mySet.Add(5);
	mySet.Add(10);
	mySet.Add(5);

	mySet.Print();

	if (mySet.Contains(10))
		cout << "10 está en el set\n";
	else
		cout << "10 no está en el set\n";

	mySet.Remove(5);
	mySet.Print();

	mySet.Remove(5);
}
