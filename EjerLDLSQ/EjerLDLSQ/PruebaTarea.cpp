
#include "SentinelLinkedList.h"
#include "LQueue.h"
#include "LStack.h"
#include <iostream>
using namespace std;

int main()
{
    // === Probando SentinelLinkedList ===
    cout << "=== Probando SentinelLinkedList ===" << endl;
    SentinelLinkedList<int> list;
    list.PushFront(1);  // Agrega 1 al inicio
    list.PushFront(2);  // Agrega 2 al inicio (lista: 2, 1)
    list.PushBack(3);   // Agrega 3 al final (lista: 2, 1, 3)
    cout << "Frente: " << list.Front() << endl; // Debería imprimir 2
    cout << "Count: " << list.GetCount() << endl; // Debería imprimir 3
    cout << "PopFront: " << list.PopFront() << endl; // Debería imprimir 2 (lista: 1, 3)
    cout << "PopBack: " << list.PopBack() << endl;   // Debería imprimir 3 (lista: 1)
    cout << "Count: " << list.GetCount() << endl;    // Debería imprimir 1
    list.PopFront(); // Imprime 1 (lista: vacía)
    list.PopFront(); // Debería imprimir advertencia: lista vacía

    // === Probando LQueue ===
    cout << "\n=== Probando LQueue ===" << endl;
    LQueue<int> queue;
    queue.Enqueue(1); // Agrega 1 al final
    queue.Enqueue(2); // Agrega 2 al final (cola: 1, 2)
    queue.Enqueue(3); // Agrega 3 al final (cola: 1, 2, 3)
    cout << "Frente: " << queue.Front() << endl; // Debería imprimir 1
    cout << "Count: " << queue.GetCount() << endl; // Debería imprimir 3
    cout << "Dequeue: " << queue.Dequeue() << endl; // Debería imprimir 1 (cola: 2, 3)
    cout << "Frente: " << queue.Front() << endl;    // Debería imprimir 2
    queue.Dequeue(); // Imprime 2 (cola: 3)
    queue.Dequeue(); // Imprime 3 (cola: vacía)
    queue.Dequeue(); // Debería imprimir advertencia: cola vacía

    // === Probando LStack ===
    cout << "\n=== Probando LStack ===" << endl;
    LStack<int> stack;
    stack.Push(1); // Agrega 1 al tope
    stack.Push(2); // Agrega 2 al tope (pila: 2, 1)
    stack.Push(3); // Agrega 3 al tope (pila: 3, 2, 1)
    cout << "Peak: " << stack.Peak() << endl; // Debería imprimir 3
    cout << "Count: " << stack.Count() << endl; // Debería imprimir 3
    cout << "Pop: " << stack.Pop() << endl;    // Debería imprimir 3 (pila: 2, 1)
    cout << "Peak: " << stack.Peak() << endl;  // Debería imprimir 2
    stack.Pop(); // Imprime 2 (pila: 1)
    stack.Pop(); // Imprime 1 (pila: vacía)
    stack.Pop(); // Debería imprimir advertencia: pila vacía

    return 0;
}
