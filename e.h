

#ifndef EXAMEN_TEMA_2_E_H
#define EXAMEN_TEMA_2_E_H


#endif //EXAMEN_TEMA_2_E_H


#include <stdio.h>
#include <string.h>

#define GENERIC_TYPE int
#define Estudiante(x) x ## _Estudiante
#define mostrarEstudiante(x) x ## _mostrarEstudiante

typedef struct Estudiante(GENERIC_TYPE) {
  char nombre[100];
  GENERIC_TYPE edad;
  GENERIC_TYPE promedio;
}
Estudiante(GENERIC_TYPE);

void mostrarEstudiante(Estudiante(GENERIC_TYPE) estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
    }

int main() {
    Estudiante(int) estudiante1;
    strcpy(estudiante1.nombre, "Adriana Reyes");
    estudiante1.edad = 18;
    estudiante1.promedio = 9.5;

    mostrarEstudiante(estudiante1);

    return 0;
}

