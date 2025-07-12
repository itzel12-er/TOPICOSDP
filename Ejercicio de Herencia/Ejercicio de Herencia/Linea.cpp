
#include "Linea.h"

// Constructor que pasa "Línea" a la clase base y reserva memoria
Linea::Linea(float* arr, int size) : Figura("Línea"), tamano(size) {
    segmentos = new float[tamano];
    for (int i = 0; i < tamano; i++) {
        segmentos[i] = arr[i];
    }
}

// Destructor que libera la memoria dinámica asignada
Linea::~Linea() {
    delete[] segmentos;
}

// Cálculo del área de una línea (siempre 0)
float Linea::CalcularArea() {
    return 0.0f;
}

// Cálculo del perímetro como suma de los segmentos
float Linea::CalcularPerimetro() {
    float perimetro = 0.0f;
    for (int i = 0; i < tamano; i++) {
        perimetro += segmentos[i];
    }
    return perimetro;
}
