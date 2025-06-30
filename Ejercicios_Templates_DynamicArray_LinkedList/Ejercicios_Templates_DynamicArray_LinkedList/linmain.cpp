// Este archivo contiene el punto de entrada del programa para probar LinkedList
#include <iostream>
#include "LinkedList.h"

int main() {
    // Crea una lista de enteros
    LinkedList<int> lista;
    lista.push_front(20);
    lista.push_front(10);
    std::cout << "Lista: ";
    lista.print();           // Deber�a mostrar: 10 20
    lista.pop_front();
    std::cout << "Despu�s de pop_front: ";
    lista.print();           // Deber�a mostrar: 20
    // Opcional: lista.clear(); // Ya no es estrictamente necesario
    std::cout << "Despu�s de clear: ";
    lista.print();           // Deber�a mostrar nada
    std::cin.get();          // Pausa la consola
    return 0;
}