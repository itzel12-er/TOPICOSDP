
#pragma once

#include <iostream>
using namespace std;

template <typename T>
class SentinelLinkedList
{
private:
    template <typename T>
    class Node
    {
    public:
        Node()
        {
            prev = nullptr;
            next = nullptr;
        }

        Node(T value)
        {
            data = value;
            prev = nullptr;
            next = nullptr;
        }

        T data;
        Node<T>* next;
        Node<T>* prev;
    };

private:
    Node<T>* NIL; // un puntero al primer y último nodo de nuestra lista ligada.
    int count;    // número de elementos en esta lista ligada.

public:
    SentinelLinkedList()
    {
        count = 0;
        NIL = new SentinelLinkedList::Node<T>(); // Sí lo tenemos que inicializar al construir la lista.
        NIL->next = NIL;
        NIL->prev = NIL;
    }

    int GetCount() { return count; };

    SentinelLinkedList::Node<T>& Find(T value);
    SentinelLinkedList::Node<T>& FindV2(T value);
    SentinelLinkedList::Node<T>& Successor(SentinelLinkedList::Node<T>* node)
    {
        return node->next;
    }

    SentinelLinkedList::Node<T>& Predecessor(SentinelLinkedList::Node<T>* node)
    {
        return node->prev;
    }

    // Añade un nuevo nodo al final de la lista.
    void PushBack(T value);
    // Quita el nodo del final de la lista y devuelve su valor.
    T PopBack();
    // Un nodo con el valor valueToInsert se insertará como el Next de previousNode.
    void Insert(T valueToInsert, Node<T>* previousNode);
    void Remove(T valueToRemove);
    // Regresa una copia de la data del nodo del frente, pero sin sacarlo de la lista.
    T Front();
    // Nuevas declaraciones para las funciones de la tarea
    void PushFront(T value); // Declara la función PushFront
    T PopFront();           // Declara la función PopFront
    int operationCounter;
};

template<typename T>
void SentinelLinkedList<T>::Remove(T valueToRemove)
{
    Node<T>* currentNode = NIL->next;
    while (currentNode != NIL)
    {
        if (currentNode->data == valueToRemove)
        {
            currentNode->prev->next = currentNode->next;
            currentNode->next->prev = currentNode->prev;
            delete currentNode;
            count--;
            return;
        }
        else
        {
            currentNode = currentNode->next;
        }
    }
}

template<typename T>
SentinelLinkedList<T>::Node<T>& SentinelLinkedList<T>::Find(T value)
{
    Node<T>* currentNode = NIL->next;
    while (currentNode != NIL)
    {
        if (currentNode->data == value)
        {
            return currentNode;
        }
        else
        {
            currentNode = currentNode->next;
        }
    }
    return nullptr;
}

template<typename T>
SentinelLinkedList<T>::Node<T>& SentinelLinkedList<T>::FindV2(T value)
{
    Node<T>* currentNode = NIL->next;
    while (currentNode != NIL)
    {
        if (currentNode->data == value)
            return currentNode;
        currentNode = currentNode->next;
    }
    return nullptr;
}

template<typename T>
void SentinelLinkedList<T>::Insert(T valueToInsert, SentinelLinkedList<T>::Node<T>* previousNode)
{
    Node<T>* newNode = new Node<T>(valueToInsert);
    newNode->next = previousNode->next;
    previousNode->next = newNode;
    count++;
}

// Añade un nuevo nodo al final de la lista.
template<typename T>
void SentinelLinkedList<T>::PushBack(T value)
{
    Node<T>* newNode = new Node<T>(value);
    newNode->next = NIL;
    NIL->prev->next = newNode;
    newNode->prev = NIL->prev;
    NIL->prev = newNode;
    count++;
}

template<typename T>
T SentinelLinkedList<T>::PopBack()
{
    if (count == 0)
    {
        cout << "Cuidado, estas haciendo pop back cuando ya no hay elementos en esta lista ligada";
        return {};
    }
    Node<T>* penultimateNode = NIL->prev;
    NIL->prev = penultimateNode->prev;
    penultimateNode->prev->next = NIL;
    T data = penultimateNode->data;
    delete penultimateNode;
    penultimateNode = nullptr;
    count--;
    return data;
}

template <typename T>
T SentinelLinkedList<T>::Front()
{
    if (count == 0)
    {
        cout << "Advertencia, se esta tratando de acceder al primer elemento de una SentinelLinkedList, pero esta vacia" << endl;
        return {};
    }
    return NIL->next->data;
}

// Agrega un nuevo nodo con el valor dado al inicio de la lista (justo después de NIL)
template <typename T>
void SentinelLinkedList<T>::PushFront(T value)
{
    // Crear un nuevo nodo con el valor proporcionado
    Node<T>* newNode = new Node<T>(value);

    // Conectar el nuevo nodo: su 'prev' apunta a NIL, su 'next' al primer nodo actual
    newNode->prev = NIL;
    newNode->next = NIL->next;

    // Actualizar los punteros del nodo centinela y del primer nodo actual
    NIL->next->prev = newNode; // El 'prev' del primer nodo ahora apunta al nuevo nodo
    NIL->next = newNode;       // El 'next' de NIL ahora apunta al nuevo nodo

    // Incrementar el contador de elementos
    count++;
}

// Elimina el primer nodo de la lista y devuelve su valor
template <typename T>
T SentinelLinkedList<T>::PopFront()
{
    // Verificar si la lista está vacía
    if (count == 0)
    {
        cout << "Cuidado, estas intentando hacer PopFront en una lista vacia" << endl;
        return {}; // Devolver valor por defecto de tipo T
    }

    // Obtener el primer nodo (el que está justo después de NIL)
    Node<T>* firstNode = NIL->next;

    // Guardar el valor del nodo para devolverlo
    T value = firstNode->data;

    // Actualizar los punteros para eliminar el primer nodo
    NIL->next = firstNode->next;       // El 'next' de NIL apunta al segundo nodo
    firstNode->next->prev = NIL;       // El 'prev' del segundo nodo apunta a NIL

    // Liberar la memoria del nodo eliminado
    delete firstNode;

    // Decrementar el contador de elementos
    count--;

    // Devolver el valor del nodo eliminado
    return value;
}
