
#ifndef CUBO_H
#define CUBO_H

#include "Cuadrado.h"

class Cubo : public Cuadrado {
public:
    // Constructor que usa el constructor de Cuadrado
    Cubo(float l);
    // Destructor virtual por herencia
    ~Cubo() override;
    // Cálculo del volumen del cubo
    float Volumen();
    // Cálculo del área de la superficie del cubo
    float Surface();
};

#endif // CUBO_H
