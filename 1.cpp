#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
    } Estudiante;

typedef struct Nodo {
    Estudiante estudiante;
    struct Nodo *siguiente;
} Nodo;

Nodo *nuevoNodo(Estudiante estudiante) {
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    if (nodo != NULL) {
        nodo->estudiante = estudiante;
        nodo->siguiente = NULL;

    }
    return nodo;
}

void agregarEstudiante(Nodo **lista, Estudiante estudiante) {
    Nodo *nodo = nuevoNodo(estudiante);
    if (nodo != NULL) {
        nodo->siguiente = *lista;