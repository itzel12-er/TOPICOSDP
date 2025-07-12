#pragma once
#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura {
private:
    // Radio del c�rculo, encapsulado para control interno
    float radio;

public:
    // Constructor que inicializa el nombre y el radio
    Circulo(float r);
    // Destructor virtual por herencia
    ~Circulo() override;
    // Sobrescribe el c�lculo del �rea
    float CalcularArea() override;
    // Sobrescribe el c�lculo del per�metro
    float CalcularPerimetro() override;
};

#endif // CIRCULO_H
