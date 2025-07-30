#pragma once

#include <iostream>

#include <forward_list> 
#include <string>
using namespace std;


template <typename T>
class HashTableChaining
{
	// un lugar donde almacenar los datos
	// un arreglo de N forwards lists, donde cada una corresponde a un indice de la hash table.
	forward_list<T>* data;
	unsigned int arraySize;
	// unsigned = SIN signo, es decir, no puede ser negativo.

	// size_t // es solamente un int de 64 bits unsigned (no-negativo).
	// originalmente, se supone que es el tamano estandar de las variables (direcciones de memoria) que maneja en el sistema operativo.

public:

	HashTableChaining(unsigned int size)
	{
		// pedimos memoria para nuestras N listas.
		data = new forward_list<T>[size];
		arraySize = size;
	}

	// necesitan una funciin hash, que es la que mapea desde una llave hacia un indice
	// es una funciin que toma un valor del tipo T y lo convierte en un entero
	int HashFunction(T key)
	{
		return key % arraySize;
	}

	// m?todos de insertar, quitar, buscar e iterar.
	void Add(T element)
	{
		int index = HashFunction(element);
		data[index].push_front(element); // esto de aqui es complejidad constante, no aumenta conforme mas elementos haya.

		// arraySize = 10
		// element = 39
		// int index = HashFunction(element); nos da 9
		// data[index] = element; nos dara que data[9] = 39
	}

	// aqui, remove Si es lineal en el aspecto de que crece conforme crece la cantidad de elementos guardados,
	// pero no es directamente 'n', si no que es "n/arraySize" (en el caso promedio), lo cual la hace un poco mejor.
	void Remove(T element)
	{
		int index = HashFunction(element);
		forward_list<T>& listAtIndex = data[index];
		for (auto i : listAtIndex) // esto es basicamente un foreach
		{
			if (i == element)
			{
				// quitamos este elemento y salimos de la funcion.
				listAtIndex.remove(i);
				return;
			}
		}
		throw runtime_error("no element " + to_string(element) + " in this hash table.");

		//var myVar = 3.1415f;
		//var myVar2 = "hola ,mundo";
		//var myHashTable = HastTableChaining();
	}

	// contains es la funciin de busqueda.
	bool Contains(T element)
	{
		int index = HashFunction(element);
		forward_list<T>& listAtIndex = data[index];
		for (auto i : listAtIndex) // esto es basicamente un foreach
		{
			if (i == element)
			{
				// encontramos el elemento y salimos de la funcion.
				return true;
			}
		}
		return false; // retorna false porque si se llega a esta linea es que nunca se entra al true de arriba.
	}

	void Print()
	{
		// vamos a iterar por cada uno de los indices
		for (int i = 0; i < arraySize; i++)
		{
			cout << "lista del indice: " << std::to_string(i) << ": ";
			// en cada indice hay una lista, entonces iteramos en toda la lista.
			for (auto j : data[i]) // recuerden, este for con auto nos itera la lista de inicio a fin.
				cout << j << ", ";

			cout << endl;

		}

	}

	//void Print()
	//{

	//}
};

void HashTableChainingExample();