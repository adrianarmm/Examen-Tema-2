

#ifndef EXAMEN_TEMA_2_E_H
#define EXAMEN_TEMA_2_E_H


#endif //EXAMEN_TEMA_2_E_H


#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}


int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Adriana");
    estudiante1.edad = 18;
    estudiante1.promedio = 9.5;
    mostrarEstudiante(estudiante1);

    return 0;
}
