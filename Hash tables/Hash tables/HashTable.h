#pragma once
#include <iostream>
using namespace std;

template <typename T>
class HashTable
{
	// un lugar donde almacenar los datos
	T* data;
	unsigned int arraySize;

public:

	// Constructor con asignaci�n de memoria
	HashTable(unsigned int size) {
		arraySize = size;
		data = new T[arraySize](); // Inicializa con valores por defecto (0 para int)
	}

	// necesitan una funci�n hash, que es la que mapea desde una llave hacia un �ndice
	// es una funci�n que toma un valor del tipo T y lo convierte en un entero
	int HashFunction(T key)
	{
		return key % arraySize;
	}

	// m�todos de insertar, quitar, buscar e iterar.
	void Add(T element)
	{
		int index = HashFunction(element);
		int i = 0;
		while (i < arraySize) {
			int probeIndex = (index + i) % arraySize; // Desplazamiento lineal con ciclo
			if (data[probeIndex] == T() || data[probeIndex] == element) { // Espacio vac�o o duplicado
				data[probeIndex] = element;
				cout << "Insertado " << element << " en indice " << probeIndex << endl;
				return;
			}
			cout << "Colision en indice " << probeIndex << ", probando siguiente..." << endl;
			i++;
		}
		cout << "Error: La tabla hash esta llena, no se puede insertar " << element << endl;
	}

	void Remove(T element)
	{
		int index = HashFunction(element);
		data[index] = T(); // Usar T() para limpiar
	}

	// contains es la funci�n de b�squeda.
	bool Contains(T element)
	{
		int index = HashFunction(element);
		return data[index] == element; // devuelve true si si son iguales; false sino.
	}

	// Destructor para liberar memoria
	~HashTable() {
		delete[] data;
	}

	//void Print()
	//{

	//}
};