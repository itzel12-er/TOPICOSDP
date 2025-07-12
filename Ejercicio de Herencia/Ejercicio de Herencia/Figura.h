
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
    // Método virtual para calcular el área, permite sobrescritura en hijas
    virtual float CalcularArea();
    // Método virtual para calcular el perímetro, permite sobrescritura en hijas
    virtual float CalcularPerimetro();
    // Método para obtener el nombre, constante para no alterar el objeto
    const std::string& ObtenerNombreDeFigura() const;
};

#endif // FIGURA_H
