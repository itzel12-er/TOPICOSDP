#pragma once

#include "HashTableChaining.h"
#include <iostream>

template <typename T>
class HashSet : public HashTableChaining<T>
{
public:
    HashSet(unsigned int size) : HashTableChaining<T>(size) {}

    void Add(T element) override // Restaure 'override' 
    {
        if (!this->Contains(element))
        {
            HashTableChaining<T>::Add(element);
            std::cout << "Agregado " << element << " a HashSet" << std::endl;
        }
        else
        {
            std::cout << "Elemento " << element << " ya existe, no se agrega" << std::endl;
        }
    }
};