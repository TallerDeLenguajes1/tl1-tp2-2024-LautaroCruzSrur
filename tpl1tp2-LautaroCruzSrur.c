#include <stdio.h>
#include <stdlib.h>
#define N 20
 int main() {
    int i;
    double vt[N];
    double *puntero = vt; // Inicializamos un puntero que apunta al primer elemento del arreglo

    for (i = 0; i < N; i++) {
        *(puntero + i) = 1 + rand() % 100; // Accedemos al elemento i-ésimo utilizando aritmética de punteros
        printf("%f ", *(puntero + i)); // Imprimimos el valor del elemento i-ésimo utilizando aritmética de punteros
    }

    return 0;
}