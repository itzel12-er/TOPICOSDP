
#include "Circulo.h"

// Constructor que pasa "Círculo" a la clase base y asigna el radio
Circulo::Circulo(float r) : Figura("Circulo"), radio(r) {}

// Destructor vacío, no hay memoria dinámica que liberar
Circulo::~Circulo() = default;

// Cálculo del área del círculo usando π * r²
float Circulo::CalcularArea() {
    return 3.14159f * radio * radio;
}

// Cálculo del perímetro del círculo usando 2 * π * r
float Circulo::CalcularPerimetro() {
    return 2 * 3.14159f * radio;
}
