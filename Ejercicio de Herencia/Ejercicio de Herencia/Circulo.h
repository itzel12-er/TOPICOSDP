#pragma once
#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura {
private:
    // Radio del círculo, encapsulado para control interno
    float radio;

public:
    // Constructor que inicializa el nombre y el radio
    Circulo(float r);
    // Destructor virtual por herencia
    ~Circulo() override;
    // Sobrescribe el cálculo del área
    float CalcularArea() override;
    // Sobrescribe el cálculo del perímetro
    float CalcularPerimetro() override;
};

#endif // CIRCULO_H
