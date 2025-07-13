
#include "Cuadrado.h"

// Constructor que pasa "Cuadrado" a la clase base y asigna el lado
Cuadrado::Cuadrado(float l) : Figura("Cuadrado"), lado(l) {}

// Destructor vac�o, no hay memoria din�mica que liberar
Cuadrado::~Cuadrado() = default;

// C�lculo del �rea del cuadrado: lado�
float Cuadrado::CalcularArea() {
    return lado * lado;
}

// C�lculo del per�metro del cuadrado: 4 * lado
float Cuadrado::CalcularPerimetro() {
    return 4 * lado;
}
