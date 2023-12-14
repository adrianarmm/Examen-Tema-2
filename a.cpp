
#include <iostream>



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

void mostrarMaterias(const Estudiante& estudiante) {
    std::cout << "Materias de " << estudiante.nombre << ":\n";
    for (const auto& materia : estudiante.materias) {
        std::cout << "Nombre: " << materia.nombre << ", Código: " << materia.codigo << "\n";
    }
}

int main() {
    Estudiante estudiante1 = {"Adriana", 20, 85.5, {}};

    Materia mat1 = {"Programacion", 101};
    Materia mat2 = {"Informatica", 102};

    agregarMateria(estudiante1, mat1);
    agregarMateria(estudiante1, mat2);

    mostrarMaterias(estudiante1);

    eliminarMateria(estudiante1, 101);

    mostrarMaterias(estudiante1);

    return 0;
}