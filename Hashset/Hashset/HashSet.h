#pragma once

#include "HashTableChaining.h"

template <typename T>
class HashSet
{
private:
    HashTableChaining<T> data; // la tabla hash que vamos a usar para guardar

public:
    // Constructor que recibe el tamaño
    HashSet(unsigned int size) : data(size)
    {}

    // Agrega un elemento si no esta ya en la tabla
    void Add(const T& element)
    {
        if (!data.Contains(element))
        {
            data.Add(element);
        }
        else
        {}
    }

    // Borra un elemento si existe
    void Remove(const T& element)
    {
        if (data.Contains(element))
        {
            data.Remove(element);
        }
        else
        {}
    }

    // Revisa si un elemento esta en el conjunto
    bool Contains(const T& element)
    {
        return data.Contains(element);
    }

    // Imprime los elementos
    void Print()
    {
        data.Print();
    }
};