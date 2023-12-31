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
        *lista = nodo;
    } else {
        printf("Error: no se pudo asignar memoria para el estudiante.\n");
    }
}


void verEstudiante(Nodo *lista) {
    while (lista != NULL) {
        printf("Nombre: %s\n", lista->estudiante.nombre);
        printf("Edad: %d\n", lista->estudiante.edad);
        printf("Promedio: %.2f\n", lista->estudiante.promedio);
        lista = lista->siguiente;
    }
}

void eliminarEstudiante(Nodo **lista, char *nombre) {
    Nodo *actual = *lista;
    Nodo *anterior = NULL;

    while (actual != NULL && strcmp(actual->estudiante.nombre, nombre) != 0) {
        anterior = actual;
        actual = actual->siguiente;
    }

        if (actual == NULL) {
            printf("No se encontró al estudiante con el nombre proporcionado.\n");
            return;
        }

        if (anterior == NULL) {
            *lista = actual->siguiente;
        } else {
            anterior->siguiente = actual->siguiente;
        }

        free(actual);
    }

    void liberarMemoria(Nodo **lista) {
        while (*lista != NULL) {
            Nodo *temp = *lista;
            *lista = (*lista)->siguiente;
            free(temp);
        }
    }

    int main() {
        Nodo *listaEstudiantes = NULL;

        Estudiante estudiante1;
        strcpy(estudiante1.nombre, "Juan");
        estudiante1.edad = 20;
        estudiante1.promedio = 6;

        agregarEstudiante(&listaEstudiantes, estudiante1);

        Estudiante estudiante2;
        strcpy(estudiante2.nombre, "Adriana");
        estudiante2.edad = 18;
        estudiante2.promedio = 10;

        agregarEstudiante(&listaEstudiantes, estudiante2);

        verEstudiante(listaEstudiantes);

        eliminarEstudiante(&listaEstudiantes, "Juan");

        verEstudiante(listaEstudiantes);

        liberarMemoria(&listaEstudiantes);

        return 0;
    }