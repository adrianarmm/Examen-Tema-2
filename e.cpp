#include <iostream>
#include <string>

template <typename A>
struct Estudiante {
    std::string nombre;
    A edad;
    A promedio;
    };

template <typename A>
void imprimir(Estudiante<A> estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}
