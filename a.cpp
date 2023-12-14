#include <iostream>
#include <string>
#include <vector>

struct Materia {
    std::string nombre;
    int codigo;

    };

struct Estudiante {
        std::string nombre;
        int edad;
        float promedio;
        std::vector<Materia> materias;
        };

void agregarMateria(Estudiante& estudiante, const Materia& nuevaMateria) {
    estudiante.materias.push_back(nuevaMateria);
}

void eliminarMateria(Estudiante& estudiante, int codigoMateria) {
    for (auto it = estudiante.materias.begin(); it != estudiante.materias.end(); ++it) {
        if (it->codigo == codigoMateria) {
            estudiante.materias.erase(it);
            break;
        }
    }
}