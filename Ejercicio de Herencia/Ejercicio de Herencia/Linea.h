
#ifndef LINEA_H
#define LINEA_H

#include "Figura.h"

class Linea : public Figura {
private:
    // Arreglo dinámico para los segmentos, encapsulado
    float* segmentos;
    // Tamaño del arreglo, encapsulado
    int tamano;

public:
    // Constructor que inicializa el nombre y el arreglo dinámico
    Linea(float* arr, int size);
    // Destructor virtual para liberar memoria
    ~Linea() override;
    // Sobrescribe el cálculo del área (siempre 0)
    float CalcularArea() override;
    // Sobrescribe el cálculo del perímetro (suma de segmentos)
    float CalcularPerimetro() override;
};

#endif // LINEA_H
