
#ifndef EXAMEN_TEMA_2_I_H
#define EXAMEN_TEMA_2_I_H



#endif //EXAMEN_TEMA_2_I_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ASISTENCIAS 50
#define MAX_FECHA 20
#define MAX_MATERIA 50

typedef enum {
    ASISTIO,
    FALTA,
    TARDANZA
} EstadoAsistencia;

typedef struct {
    char fecha[MAX_FECHA];
    EstadoAsistencia estado;
} Asistencia;

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
    Asistencia registroAsistencia[MAX_ASISTENCIAS];
    int num_asistencias;
} Estudiante;

void registrarAsistencia(Estudiante* estudiante, const char* fecha, const char* materia, EstadoAsistencia estado) {
    if (estudiante->num_asistencias < MAX_ASISTENCIAS) {
        strcpy(estudiante->registroAsistencia[estudiante->num_asistencias].fecha, fecha);
        estudiante->registroAsistencia[estudiante->num_asistencias].estado = estado;
        estudiante->num_asistencias++;
    } else {
        printf("No se pueden agregar más asistencias.\n");
    }
}

void mostrarAsistencia(const Estudiante* estudiante) {
    printf("Registro de asistencia para %s:\n", estudiante->nombre);
    for (int i = 0; i < estudiante->num_asistencias; ++i) {
        char* estado;
        if (estudiante->registroAsistencia[i].estado == ASISTIO) {
            estado = "Asistió";
        } else if (estudiante->registroAsistencia[i].estado == FALTA) {
            estado = "Falta";
        } else {
            estado = "Tardanza";
        }
        printf("Fecha: %s, Materia: %s, Estado: %s\n", estudiante->registroAsistencia[i].fecha, estudiante->registroAsistencia[i].materia, estado);
    }
}

int main() {
    Estudiante estudiante1 = {"Adriana", 20, 85.5, {}, 0};

    registrarAsistencia(&estudiante1, "01/01/2024", "Programacion", ASISTIO);
    registrarAsistencia(&estudiante1, "02/01/2024", "Informatica", FALTA);


    mostrarAsistencia(&estudiante1);

    return 0;
}