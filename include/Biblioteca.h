#pragma once
#include "Libro.h"
#include <vector>
#include <string>
class Biblioteca {
private:
    std::vector<Libro> catalogo;
public:
    void agregarLibro(const Libro& libro);
    void eliminarLibro(const std::string& isbn);
    void buscarLibro(const std::string& consulta) const;
    void mostrarDisponibles() const;
};
