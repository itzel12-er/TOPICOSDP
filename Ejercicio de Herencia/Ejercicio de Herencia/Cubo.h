
#ifndef CUBO_H
#define CUBO_H

#include "Cuadrado.h"

class Cubo : public Cuadrado {
public:
    // Constructor que usa el constructor de Cuadrado
    Cubo(float l);
    // Destructor virtual por herencia
    ~Cubo() override;
    // C�lculo del volumen del cubo
    float Volumen();
    // C�lculo del �rea de la superficie del cubo
    float Surface();
};

#endif // CUBO_H
