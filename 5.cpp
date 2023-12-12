#include <stdio.h>
#include <string.h>

typedef struct Estudiante {
 char nombre[100];
 int edad;
 float promedio;
} Estudiante;

void imprimir(Estudiante estudiante) {
 printf("Nombre: %s\n", estudiante.nombre);
 printf("Edad: %d\n", estudiante.edad);
 printf("Promedio: %.2f\n", estudiante.promedio);
}

int main() {
 Estudiante estudiante1;
 strcpy(estudiante1.nombre, "Juan Pérez");
 estudiante1.edad = 20;
 estudiante1.promedio = 85.0;