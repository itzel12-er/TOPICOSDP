
#include <iostream>
#include "Figura.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Cubo.h"
#include "FiguraNLados.h"
#include "Linea.h"

int main() {
    // Prueba Círculo con puntero a Figura
    Figura* circulo = new Circulo(2.0f);
    std::cout << "Circulo - Nombre: " << circulo->ObtenerNombreDeFigura()
        << ", Area: " << circulo->CalcularArea()
        << ", Perimetro: " << circulo->CalcularPerimetro() << std::endl;
    delete circulo;

    // Prueba Cuadrado con puntero a Figura
    Figura* cuadrado = new Cuadrado(2.0f);
    std::cout << "Cuadrado - Nombre: " << cuadrado->ObtenerNombreDeFigura()
        << ", Area: " << cuadrado->CalcularArea()
        << ", Perimetro: " << cuadrado->CalcularPerimetro() << std::endl;
    delete cuadrado;

    // Prueba FiguraNLados (Pentágono) con puntero a Figura
    Figura* pentagono = new FiguraNLados(5, 2.0f);
    std::cout << "Pentagono - Nombre: " << pentagono->ObtenerNombreDeFigura()
        << ", Area: " << pentagono->CalcularArea()
        << ", Perimetro: " << pentagono->CalcularPerimetro() << std::endl;
    delete pentagono;

    // Prueba Cubo directamente (no necesita puntero a Figura)
    Cubo cubo(2.0f);
    std::cout << "Cubo - Nombre: " << cubo.ObtenerNombreDeFigura()
        << ", Area: " << cubo.CalcularArea()
        << ", Perimetro: " << cubo.CalcularPerimetro()
        << ", Volumen: " << cubo.Volumen()
        << ", Surface: " << cubo.Surface() << std::endl;

    // Prueba Línea con puntero a Figura, como se especificó
    float segmentos[] = { 1.0f, 2.0f, 3.0f };
    Figura* linea = new Linea(segmentos, 3);
    std::cout << "Linea - Nombre: " << linea->ObtenerNombreDeFigura()
        << ", Area: " << linea->CalcularArea()
        << ", Perimetro: " << linea->CalcularPerimetro() << std::endl;
    delete linea;

    return 0;
}
