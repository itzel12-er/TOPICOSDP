
#include "Linea.h"

// Constructor que pasa "L�nea" a la clase base y reserva memoria
Linea::Linea(float* arr, int size) : Figura("L�nea"), tamano(size) {
    segmentos = new float[tamano];
    for (int i = 0; i < tamano; i++) {
        segmentos[i] = arr[i];
    }
}

// Destructor que libera la memoria din�mica asignada
Linea::~Linea() {
    delete[] segmentos;
}

// C�lculo del �rea de una l�nea (siempre 0)
float Linea::CalcularArea() {
    return 0.0f;
}

// C�lculo del per�metro como suma de los segmentos
float Linea::CalcularPerimetro() {
    float perimetro = 0.0f;
    for (int i = 0; i < tamano; i++) {
        perimetro += segmentos[i];
    }
    return perimetro;
}
