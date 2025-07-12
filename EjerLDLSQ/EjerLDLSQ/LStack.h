#pragma once

#include <forward_list>
#include <iostream>
using namespace std;

template <typename T>
class LStack
{
private:
    std::forward_list<T> data; // Lista simplemente enlazada para almacenar los elementos
    int count; // Contador de elementos para O(1) en Count()

public:
    LStack()
    {
        count = 0; // Inicializar el contador en 0
    }

    // Añade un elemento al tope de la pila (inicio de la lista)
    void Push(T value)
    {
        data.push_front(value); // Agregar al inicio de la forward_list
        count++; // Incrementar el contador
    }

    // Elimina y devuelve el elemento del tope de la pila
    T Pop()
    {
        if (count == 0)
        {
            cout << "Advertencia, intentaste sacar un elemento de una pila vacia." << endl;
            return {}; // Devolver valor por defecto de tipo T
        }
        T value = data.front(); // Obtener el elemento del inicio
        data.pop_front(); // Eliminar el elemento del inicio
        count--; // Decrementar el contador
        return value;
    }

    // Devuelve el elemento del tope sin eliminarlo
    T Peak()
    {
        if (count == 0)
        {
            cout << "Advertencia, intentaste hacer Peak en una pila vacia." << endl;
            return {}; // Devolver valor por defecto de tipo T
        }
        return data.front(); // Devolver el elemento del inicio
    }

    // Devuelve el número de elementos en la pila
    int Count() { return count; }
};