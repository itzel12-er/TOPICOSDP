
#ifndef FIGURANLADOS_H
#define FIGURANLADOS_H

#include "Figura.h"
#include <cmath>

class FiguraNLados : public Figura {
private:
    // N�mero de lados del pol�gono, encapsulado
    int nLados;
    // Longitud de cada lado, encapsulado
    float longitudLado;

public:
    // Constructor que inicializa el nombre, n�mero de lados y longitud
    FiguraNLados(int n, float l);
    // Destructor virtual por herencia
    ~FiguraNLados() override;
    // Sobrescribe el c�lculo del �rea
    float CalcularArea() override;
    // Sobrescribe el c�lculo del per�metro
    float CalcularPerimetro() override;
};

#endif // FIGURANLADOS_H
