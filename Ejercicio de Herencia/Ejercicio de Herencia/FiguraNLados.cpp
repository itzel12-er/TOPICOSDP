
#include "FiguraNLados.h"

// Constructor que pasa "FiguraNLados" a la clase base
FiguraNLados::FiguraNLados(int n, float l) : Figura("FiguraNLados"), nLados(n), longitudLado(l) {}

// Destructor vacío, no hay memoria dinámica que liberar
FiguraNLados::~FiguraNLados() = default;

// Cálculo del área de un polígono regular: (n * lado²) / (4 * tan(π/n))
float FiguraNLados::CalcularArea() {
    return (nLados * longitudLado * longitudLado) / (4 * tan(3.14159f / nLados));
}

// Cálculo del perímetro de un polígono regular: n * lado
float FiguraNLados::CalcularPerimetro() {
    return nLados * longitudLado;
}
