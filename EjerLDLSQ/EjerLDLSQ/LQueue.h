#pragma once

#include "SentinelLinkedList.h"

#include <iostream>
using namespace std;

template <typename T>
class LQueue
{
private:
    SentinelLinkedList<T> data;

public:
    LQueue()
    {
    }

    // Devuelve el número de elementos en la cola
    int GetCount() { return data.GetCount(); }

    // Añade un elemento al final de la cola
    void Enqueue(T value)
    {
        data.PushBack(value);
    }

    // Elimina y devuelve el elemento del frente de la cola
    T Dequeue()
    {
        if (data.GetCount() == 0)
        {
            cout << "Cuidado, estas intentando hacer Dequeue en una cola vacia" << endl;
            return {}; // Devolver valor por defecto de tipo T
        }
        return data.PopFront();
    }

    // Devuelve el elemento del frente sin eliminarlo
    T Front() { return data.Front(); }
};