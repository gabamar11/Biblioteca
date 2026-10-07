#pragma once
#include <string>
class Usuario {
protected:
    std::string nombre;
    int limitePrestamos, librosActuales;
public:
    Usuario(std::string n, int limite);
    virtual ~Usuario() = default;
    std::string getNombre() const;
    bool puedePrestar() const;
    void registrarPrestamo();
    void devolverLibro();
    virtual std::string getRol() const = 0;
};
class Estudiante : public Usuario {
public:
    Estudiante(std::string n);
    std::string getRol() const override;
};
class Profesor : public Usuario {
public:
    Profesor(std::string n);
    std::string getRol() const override;
};
