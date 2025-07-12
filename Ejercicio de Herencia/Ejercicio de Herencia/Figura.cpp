
#include "Figura.h"
#include <iostream>

// Implementaci�n por defecto del �rea, muestra mensaje si no se sobrescribe
float Figura::CalcularArea() {
    std::cout << "Area no definida para " << nombre << std::endl;
    return 0.0f;
}

// Implementaci�n por defecto del per�metro, muestra mensaje si no se sobrescribe
float Figura::CalcularPerimetro() {
    std::cout << "Perimetro no definido para " << nombre << std::endl;
    return 0.0f;
}

// Devuelve el nombre de la figura de forma segura
const std::string& Figura::ObtenerNombreDeFigura() const {
    return nombre;
}
