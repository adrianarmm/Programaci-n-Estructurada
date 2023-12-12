#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union {
    int entero;
    float flotante;
    char cadena[100];
} UniVar;

int main()  {
UniVar variable;

variable.entero = 3;
printf("Entero: %d\n", variable.entero);

variable.flotante = 21.34;
printf("Flotante: %.2f\n", variable.flotante);

strcpy(variable.cadena, "¿Quieres tarta de queso?");
printf("Cadena: %s\n", variable.cadena)

return 0;
}