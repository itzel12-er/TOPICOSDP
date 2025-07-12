
#include "Cuadrado.h"

// Constructor que pasa "Cuadrado" a la clase base y asigna el lado
Cuadrado::Cuadrado(float l) : Figura("Cuadrado"), lado(l) {}

// Destructor vacío, no hay memoria dinámica que liberar
Cuadrado::~Cuadrado() = default;

// Cálculo del área del cuadrado: lado²
float Cuadrado::CalcularArea() {
    return lado * lado;
}

// Cálculo del perímetro del cuadrado: 4 * lado
float Cuadrado::CalcularPerimetro() {
    return 4 * lado;
}
