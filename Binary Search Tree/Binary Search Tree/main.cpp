#include "BinarySearchTree.h"
#include <cstdlib>

int main()
{
    BinarySearchTree<int> bst;

    bst.Add(5);
    bst.Add(5); // Duplicado a la izquierda
    bst.Add(7);
    bst.Add(3);

    cout << "InOrder traversal: " << endl;
    bst.InOrderWithRecursive();

    cout << "PostOrder deletion: " << endl;
    bst.DeleteTreePostOrder();

    BinarySearchTree<int> bst2;
    bst2.Add(5);
    bst2.Add(5);
    bst2.Add(7);
    bst2.Add(3);
    cout << "PostOrder traversal: " << endl;
    bst2.PostOrderIterative();

    system("pause");
    return 0;
}