#include "HashTable.h"
#include <cstdlib>

int main() {
    HashTable<int> ht(5); // Tama�o 5

    // Caso 1: Inserci�n sin colisi�n
    cout << "Caso 1: Insercion sin colision" << endl;
    ht.Add(1);

    // Caso 2: Inserci�n con colisi�n, lugar a la derecha
    cout << "\nCaso 2: Insercion con colision, lugar a la derecha" << endl;
    ht.Add(6);

    // Caso 3: Inserci�n con colisi�n, ciclo a la izquierda
    cout << "\nCaso 3: Insercion con colision, ciclo a la izquierda" << endl;
    ht.Add(11);
    ht.Add(16); // Llena m�s para forzar ciclo
    ht.Add(21); // Deber�a ciclar a 0

    // Caso 4: Inserci�n con array lleno
    cout << "\nCaso 4: Insercion con array lleno" << endl;
    ht.Add(7);

    system("pause");
    return 0;
}