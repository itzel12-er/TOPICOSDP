#include "HashSet.h"
#include <cstdlib>

int main()
{
    HashSet<int> hs(4);

    hs.Add(39);
    hs.Add(252);
    hs.Add(40);
    hs.Add(0);
    hs.Add(24);
    hs.Add(39); // Intento de duplicado

    hs.Print();

    if (!hs.Contains(1234))
    {
        std::cout << "HashSet no contiene 1234" << std::endl;
    }
    if (hs.Contains(40))
    {
        std::cout << "HashSet contiene 40, lo vamos a borrar" << std::endl;
        hs.Remove(40);
    }

    hs.Print();

    system("pause");
    return 0;
}