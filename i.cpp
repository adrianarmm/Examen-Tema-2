#include <iostream>
#include <string>
#include <vector>
#include <ctime>

enum EstadoAsistencia {
    ASISTIO,
    FALTA,
    TARDANZA
};

struct Asistencia {
    std::string fecha;
    std::string materia;
    EstadoAsistencia estado;
};

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<Asistencia> registroAsistencia;
};

void registrarAsistencia(Estudiante& estudiante, const std::string& fecha, const std::string& materia, EstadoAsistencia estado) {
    Asistencia nuevaAsistencia = {fecha, materia, estado};
    estudiante.registroAsistencia.push_back(nuevaAsistencia);
}


void mostrarAsistencia(const Estudiante& estudiante) {
    std::cout << "Registro de asistencia para " << estudiante.nombre << ":\n";
    for (const auto& asistencia : estudiante.registroAsistencia) {
        std::string estado;
        if (asistencia.estado == ASISTIO) {
            estado = "Asistió";
        } else if (asistencia.estado == FALTA) {
            estado = "Falta";
        } else {
            estado = "Tardanza";
        }
        std::cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia << ", Estado: " << estado << "\n";
    }
}

int main() {
    Estudiante estudiante1 = {"Juan", 20, 85.5, {}};

    registrarAsistencia(estudiante1, "01/01/2024", "Matemáticas", ASISTIO);
    registrarAsistencia(estudiante1, "02/01/2024", "Historia", FALTA);

    mostrarAsistencia(estudiante1);

    return 0;
}