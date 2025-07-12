
#include "Figura.h"
#include <iostream>

// Implementación por defecto del área, muestra mensaje si no se sobrescribe
float Figura::CalcularArea() {
    std::cout << "Area no definida para " << nombre << std::endl;
    return 0.0f;
}

// Implementación por defecto del perímetro, muestra mensaje si no se sobrescribe
float Figura::CalcularPerimetro() {
    std::cout << "Perimetro no definido para " << nombre << std::endl;
    return 0.0f;
}

// Devuelve el nombre de la figura de forma segura
const std::string& Figura::ObtenerNombreDeFigura() const {
    return nombre;
}
