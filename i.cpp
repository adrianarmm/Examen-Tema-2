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
