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


int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Adriana Reyes");
    estudiante1.edad = 18;
    estudiante1.promedio = 9;

    Estudiante estudiante2 = copiarEstudiante(estudiante1);

   printf("Nombre: %s\n", estudiante2.nombre);
   printf("Edad: %d\n", estudiante2.edad);
   printf("Promedio: %.2f\n", estudiante2.promedio);

   return 0;
}