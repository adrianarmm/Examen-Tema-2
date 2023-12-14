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

int main() {
    Estudiante<int> estudiante1;
    estudiante1.nombre = "Adriana Reyes";
    estudiante1.edad = 18;
    estudiante1.promedio = 9.5;

    imprimir(estudiante1);

    return 0;
}
