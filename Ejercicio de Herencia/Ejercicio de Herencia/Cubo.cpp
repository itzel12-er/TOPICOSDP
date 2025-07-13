
#include "Cubo.h"

// Constructor que pasa el lado a Cuadrado
Cubo::Cubo(float l) : Cuadrado(l) {}

// Destructor vacío, manteniendo la virtualidad heredada
Cubo::~Cubo() = default;

// Cálculo del área total del cubo: 6 * lado² (suma de las 6 caras)
float Cubo::CalcularArea() {
    return 6 * lado * lado;
}

// Cálculo del perímetro total del cubo: 12 * lado (suma de las 12 aristas)
float Cubo::CalcularPerimetro() {
    return 12 * lado;
}

// Cálculo del volumen del cubo: lado³
float Cubo::Volumen() {
    return lado * lado * lado;
}

// Cálculo del área de la superficie del cubo: 6 * lado²
float Cubo::Surface() {
    return 6 * lado * lado;
}