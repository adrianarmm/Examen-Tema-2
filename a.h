//
// Created by Adriana Reyes Morera on 14/12/23.
//

#ifndef EXAMEN_TEMA_2_A_H
#define EXAMEN_TEMA_2_A_H


#endif //EXAMEN_TEMA_2_A_H

#include <stdio.h>
#include <string.h>

#define MAX_MATERIAS 10

struct Materia {
    char nombre[10];
    int codigo;

};

struct Estudiante {
    char nombre[10];
    int edad;
    float promedio;
    struct Materia materias[MAX_MATERIAS];
    int num_materias;
};