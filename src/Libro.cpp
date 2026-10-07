#include "Libro.h"
Libro::Libro(std::string t, std::string a, std::string i) : titulo(t), autor(a), isbn(i), disponible(true) {}
std::string Libro::getTitulo() const { return titulo; }
std::string Libro::getAutor() const { return autor; }
std::string Libro::getIsbn() const { return isbn; }
bool Libro::isDisponible() const { return disponible; }
void Libro::setDisponible(bool estado) { disponible = estado; }
