#include "Usuario.h"
Usuario::Usuario(std::string n, int limite) : nombre(n), limitePrestamos(limite), librosActuales(0) {}
std::string Usuario::getNombre() const { return nombre; }
bool Usuario::puedePrestar() const { return librosActuales < limitePrestamos; }
void Usuario::registrarPrestamo() { if (puedePrestar()) librosActuales++; }
void Usuario::devolverLibro() { if (librosActuales > 0) librosActuales--; }
Estudiante::Estudiante(std::string n) : Usuario(n, 3) {}
std::string Estudiante::getRol() const { return "Estudiante"; }
Profesor::Profesor(std::string n) : Usuario(n, 10) {}
std::string Profesor::getRol() const { return "Profesor"; }
