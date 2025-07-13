
#ifndef FIGURANLADOS_H
#define FIGURANLADOS_H

#include "Figura.h"
#include <cmath>

class FiguraNLados : public Figura {
private:
    // Número de lados del polígono, encapsulado
    int nLados;
    // Longitud de cada lado, encapsulado
    float longitudLado;

public:
    // Constructor que inicializa el nombre, número de lados y longitud
    FiguraNLados(int n, float l);
    // Destructor virtual por herencia
    ~FiguraNLados() override;
    // Sobrescribe el cálculo del área
    float CalcularArea() override;
    // Sobrescribe el cálculo del perímetro
    float CalcularPerimetro() override;
};

#endif // FIGURANLADOS_H
