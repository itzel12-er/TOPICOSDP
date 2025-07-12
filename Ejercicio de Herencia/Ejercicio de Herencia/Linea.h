
#ifndef LINEA_H
#define LINEA_H

#include "Figura.h"

class Linea : public Figura {
private:
    // Arreglo din�mico para los segmentos, encapsulado
    float* segmentos;
    // Tama�o del arreglo, encapsulado
    int tamano;

public:
    // Constructor que inicializa el nombre y el arreglo din�mico
    Linea(float* arr, int size);
    // Destructor virtual para liberar memoria
    ~Linea() override;
    // Sobrescribe el c�lculo del �rea (siempre 0)
    float CalcularArea() override;
    // Sobrescribe el c�lculo del per�metro (suma de segmentos)
    float CalcularPerimetro() override;
};

#endif // LINEA_H
