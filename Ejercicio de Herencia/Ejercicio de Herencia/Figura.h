
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
    // Destructor virtual y p�blico para permitir polimorfismo al eliminar punteros
    virtual ~Figura() = default;
    // M�todo virtual puro para calcular el �rea, debe ser implementado por hijas
    virtual float CalcularArea() = 0;
    // M�todo virtual puro para calcular el per�metro, debe ser implementado por hijas
    virtual float CalcularPerimetro() = 0;
    // M�todo para obtener el nombre, constante para no alterar el objeto
    const std::string& ObtenerNombreDeFigura() const;
};

#endif // FIGURA_H
