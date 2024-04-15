#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 2015
struct {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
    } typedef compu;

int main(){
    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu compus[5];

    for (int i = 0; i < 5; i++)
    {
        compus[i].anio =rand() % 9 + 1 + MIN;
        compus[i].cantidad = rand() % 8 + 1;
        compus[i].velocidad= (rand() % 3) + 1;
        int numA = rand() % 6;
        compus[i].tipo_cpu=tipos[numA];
    }
    return 0;
}
