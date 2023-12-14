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

void agregarMateria(struct Estudiante* estudiante, const struct Materia* nuevaMateria) {
    if (estudiante->num_materias < MAX_MATERIAS) {
        estudiante->materias[estudiante->num_materias] = *nuevaMateria;
        estudiante->num_materias++;
    } else {
        printf("No se pueden agregar más materias.\n");
    }
}

void eliminarMateria(struct Estudiante* estudiante, int codigoMateria) {
    for (int i = 0; i < estudiante->num_materias; ++i) {
        if (estudiante->materias[i].codigo == codigoMateria) {
            for (int j = i; j < estudiante->num_materias - 1; ++j) {
                estudiante->materias[j] = estudiante->materias[j + 1];
            }
            estudiante->num_materias--;
            break;
        }
    }
}

void mostrarMaterias(const struct Estudiante* estudiante) {
    printf("Materias de %s:\n", estudiante->nombre);
    for (int i = 0; i < estudiante->num_materias; ++i) {
        printf("Nombre: %s, Código: %d\n", estudiante->materias[i].nombre, estudiante->materias[i].codigo);
    }
}