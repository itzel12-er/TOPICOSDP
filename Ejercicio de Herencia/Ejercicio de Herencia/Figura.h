
#ifndef FIGURA_H
#define FIGURA_H

#include <string>

class Figura {
private:
    // Nombre de la figura, encapsulado para evitar modificaciones externas directas
    std::string nombre;

protected:
    // Constructor protegido para que las hijas lo usen e inicialicen el nombre
    Figura(const std::string& name) : nombre(name) {}

public:
    // Destructor virtual y público para permitir polimorfismo al eliminar punteros
    virtual ~Figura() = default;
    // Método virtual puro para calcular el área, debe ser implementado por hijas
    virtual float CalcularArea() = 0;
    // Método virtual puro para calcular el perímetro, debe ser implementado por hijas
    virtual float CalcularPerimetro() = 0;
    // Método para obtener el nombre, constante para no alterar el objeto
    const std::string& ObtenerNombreDeFigura() const;
};

#endif // FIGURA_H
