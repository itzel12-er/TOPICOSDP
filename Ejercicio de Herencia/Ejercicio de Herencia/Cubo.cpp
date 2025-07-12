
#include "Cubo.h"

// Constructor que pasa el lado a Cuadrado
Cubo::Cubo(float l) : Cuadrado(l) {}

// Destructor vacío, no hay memoria dinámica que liberar
Cubo::~Cubo() = default;

// Cálculo del volumen del cubo: lado³
float Cubo::Volumen() {
    return lado * lado * lado;
}

// Cálculo del área de la superficie del cubo: 6 * lado²
float Cubo::Surface() {
    return 6 * lado * lado;
}
