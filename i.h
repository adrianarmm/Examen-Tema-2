//
// Created by Adriana Reyes Morera on 14/12/23.
//

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