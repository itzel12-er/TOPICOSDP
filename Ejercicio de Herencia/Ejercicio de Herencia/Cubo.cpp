
#include "Cubo.h"

// Constructor que pasa el lado a Cuadrado
Cubo::Cubo(float l) : Cuadrado(l) {}

// Destructor vac�o, manteniendo la virtualidad heredada
Cubo::~Cubo() = default;

// C�lculo del �rea total del cubo: 6 * lado� (suma de las 6 caras)
float Cubo::CalcularArea() {
    return 6 * lado * lado;
}

// C�lculo del per�metro total del cubo: 12 * lado (suma de las 12 aristas)
float Cubo::CalcularPerimetro() {
    return 12 * lado;
}

// C�lculo del volumen del cubo: lado�
float Cubo::Volumen() {
    return lado * lado * lado;
}

// C�lculo del �rea de la superficie del cubo: 6 * lado�
float Cubo::Surface() {
    return 6 * lado * lado;
}