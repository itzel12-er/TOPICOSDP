
#ifndef CUBO_H
#define CUBO_H

#include "Cuadrado.h"

class Cubo : public Cuadrado {
public:
    Cubo(float l);
    ~Cubo() override;
    // Nueva versión para el área total del cubo (6 caras)
    float CalcularArea() override;
    // Nueva versión para el perímetro total del cubo (12 aristas)
    float CalcularPerimetro() override;
    float Volumen();
    float Surface();
};

#endif // CUBO_H