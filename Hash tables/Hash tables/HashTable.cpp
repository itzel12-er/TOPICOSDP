#include "HashTable.h"
#include <cstdlib>

int main() {
    HashTable<int> ht(5); // Tamaño 5

    // Caso 1: Inserción sin colisión
    cout << "Caso 1: Insercion sin colision" << endl;
    ht.Add(1);

    // Caso 2: Inserción con colisión, lugar a la derecha
    cout << "\nCaso 2: Insercion con colision, lugar a la derecha" << endl;
    ht.Add(6);

    // Caso 3: Inserción con colisión, ciclo a la izquierda
    cout << "\nCaso 3: Insercion con colision, ciclo a la izquierda" << endl;
    ht.Add(11);
    ht.Add(16); // Llena más para forzar ciclo
    ht.Add(21); // Debería ciclar a 0

    // Caso 4: Inserción con array lleno
    cout << "\nCaso 4: Insercion con array lleno" << endl;
    ht.Add(7);

    system("pause");
    return 0;
}