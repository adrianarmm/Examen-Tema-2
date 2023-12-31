//
// Created by Adriana Reyes Morera on 14/12/23.
//

#ifndef EXAMEN_TEMA_2_O_H
#define EXAMEN_TEMA_2_O_H



#endif //EXAMEN_TEMA_2_O_H

#include <stdio.h>
#include <string.h>

#define FORMATO_FECHA_INVALIDO 1

int verificarFormatoFecha(const char* fecha) {

    if (strlen(fecha) != 10 || fecha[2] != '/' || fecha[5] != '/') {
        return FORMATO_FECHA_INVALIDO;
    }
    return 0;
}

int main() {
    char fecha[] = "01/01/2024";
    int resultado = verificarFormatoFecha(fecha);
    if (resultado == 0) {
        printf("Fecha válida: %s\n", fecha);
    } else {
        printf("Error: Formato de fecha inválido.\n");
    }
    return 0;
}