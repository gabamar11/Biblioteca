#include "Biblioteca.h"
#include "Usuario.h"
#include <iostream>
int main() {
    Biblioteca miBiblioteca;
    miBiblioteca.agregarLibro(Libro("1984", "George Orwell", "12345"));
    miBiblioteca.agregarLibro(Libro("Fahrenheit 451", "Ray Bradbury", "67890"));
    miBiblioteca.agregarLibro(Libro("Un Mundo Feliz", "Aldous Huxley", "11121"));
    std::cout << "\n";
    miBiblioteca.mostrarDisponibles();
    std::cout << "\n";
    miBiblioteca.buscarLibro("George Orwell");
    std::cout << "\n";
    miBiblioteca.eliminarLibro("67890");
    std::cout << "\n--- Prueba de Usuarios ---\n";
    Estudiante alumno("Juan Perez");
    Profesor docente("Dra. Martinez");
    std::cout << alumno.getNombre() << " (" << alumno.getRol() << ") puede prestar? " 
              << (alumno.puedePrestar() ? "Si" : "No") << "\n";
    return 0;
}
