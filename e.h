

#ifndef EXAMEN_TEMA_2_E_H
#define EXAMEN_TEMA_2_E_H


#endif //EXAMEN_TEMA_2_E_H


#include <stdio.h>


#define GENERIC_TYPE int
#define Estudiante(x) x ## _Estudiante
#define mostrarEstudiante(x) x ## _mostrarEstudiante

typedef struct Estudiante(GENERIC_TYPE) {
  char nombre [100];
  GENERIC_TYPE edad;
  GENERIC_TYPE promedio;
}
Estudiante(GENERIC_TYPE);

void
#undef GENERIC_TYPE
#undef Estudiante
#undef mostrarEstudiante
}