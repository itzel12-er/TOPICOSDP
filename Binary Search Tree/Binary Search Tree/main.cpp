#include "BinarySearchTree.h"
#include <cstdlib> // Para system("pause")

int main()
{
    // Crear un arbol binario de busqueda
    BinarySearchTree<int> bst;

    // Probar Add (para verificar la correccion del error en Add y AddRecursive)
    cout << "Insertando valores: 50, 30, 70, 20, 40, 30 (duplicado)" << endl;
    bst.Add(50);
    bst.Add(30);
    bst.Add(70);
    bst.Add(20);
    bst.Add(40);
    bst.Add(30); // Este no se insertara por la correccion de duplicados
    cout << "Numero de nodos: " << bst.count << endl; // Debe mostrar 5, no 6

    // Probar Search iterativo
    cout << "\nBuscando valores:" << endl;
    cout << "Buscando 40: " << (bst.Search(40) ? "Encontrado" : "No encontrado") << endl;
    cout << "Buscando 99: " << (bst.Search(99) ? "Encontrado" : "No encontrado") << endl;

    // Probar PostOrderIterative
    cout << "\nRecorrido Post-Order iterativo:" << endl;
    bst.PostOrderIterative();

    // Probar DeleteTreePostOrder
    cout << "\nBorrando el arbol con DeleteTreePostOrder:" << endl;
    bst.DeleteTreePostOrder();
    cout << "Despues de borrar, numero de nodos: " << bst.count << endl; // Debe mostrar 0
    cout << "Buscando 50 despues de borrar: " << (bst.Search(50) ? "Encontrado" : "No encontrado") << endl;

    system("pause"); // Pausa la consola para ver la salida completa
    return 0;
}