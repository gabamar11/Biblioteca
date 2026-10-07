#include "Biblioteca.h"
#include <iostream>
#include <algorithm>
void Biblioteca::agregarLibro(const Libro& libro) {
    catalogo.push_back(libro);
    std::cout << "Libro agregado: " << libro.getTitulo() << "\n";
}
void Biblioteca::eliminarLibro(const std::string& isbn) {
    auto it = std::remove_if(catalogo.begin(), catalogo.end(),
        [&isbn](const Libro& l) { return l.getIsbn() == isbn; });
    if (it != catalogo.end()) {
        catalogo.erase(it, catalogo.end());
        std::cout << "Libro con ISBN " << isbn << " eliminado.\n";
    } else {
        std::cout << "Libro no encontrado.\n";
    }
}
void Biblioteca::buscarLibro(const std::string& consulta) const {
    std::cout << "Resultados de busqueda para '" << consulta << "':\n";
    bool encontrado = false;
    for (const auto& libro : catalogo) {
        if (libro.getTitulo() == consulta || libro.getAutor() == consulta) {
            std::cout << "- " << libro.getTitulo() << " por " << libro.getAutor() 
                      << " (ISBN: " << libro.getIsbn() << ")\n";
            encontrado = true;
        }
    }
    if (!encontrado) std::cout << "No se encontraron coincidencias.\n";
}
void Biblioteca::mostrarDisponibles() const {
    std::cout << "Libros disponibles en la biblioteca:\n";
    for (const auto& libro : catalogo) {
        if (libro.isDisponible()) {
            std::cout << "- " << libro.getTitulo() << " por " << libro.getAutor() << "\n";
        }
    }
}
