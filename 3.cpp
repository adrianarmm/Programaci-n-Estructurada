#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
    } Estudiante;

Estudiante copiarEstudiante(Estudiante estudiante) {
    Estudiante copia;
    strcpy(copia.nombre, estudiante.nombre);
    copia.edad = estudiante.edad;
    copia.promedio = estudiante.promedio;
    return copia;
    }