#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 2015

int main(){
    srand(time(NULL));

    int velocidad = (rand() % 3) + 1;;
    int anio = (rand() % 9 + 1) + MIN;;
    int cantidad = rand() % 8 + 1;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};


    struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
    };


    return 0;
}
