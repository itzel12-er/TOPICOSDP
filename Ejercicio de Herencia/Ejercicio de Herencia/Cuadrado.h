
#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.h"

class Cuadrado : public Figura {
protected:
    // Lado del cuadrado, protegido para que Cubo lo herede
    float lado;

public:
    // Constructor que inicializa el nombre y el lado
    Cuadrado(float l);
    // Destructor virtual por herencia
    ~Cuadrado() override;
    // Sobrescribe el c�lculo del �rea
    float CalcularArea() override;
    // Sobrescribe el c�lculo del per�metro
    float CalcularPerimetro() override;
};

#endif // CUADRADO_H
