
#include "Cubo.h"

// Constructor que pasa el lado a Cuadrado
Cubo::Cubo(float l) : Cuadrado(l) {}

// Destructor vac�o, no hay memoria din�mica que liberar
Cubo::~Cubo() = default;

// C�lculo del volumen del cubo: lado�
float Cubo::Volumen() {
    return lado * lado * lado;
}

// C�lculo del �rea de la superficie del cubo: 6 * lado�
float Cubo::Surface() {
    return 6 * lado * lado;
}
