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

void listaPC(compu* compus);
void pcVieja(compu* compus);
void pcMasterRaise(compu* compus);
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
    listaPC(compus);
    return 0;
}
void listaPC(compu* compus){
    printf("Lista de pc: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("----PC N°%d---\n",i +1);
        printf("Velocidad : %d \n" ,compus[i].velocidad);
        printf("Año : %d \n" ,compus[i].anio);
        printf("Cantidad de nucleos : %d \n" ,compus[i].cantidad);
        printf("Tipo de Cpu: %s\n", compus[i].tipo_cpu);
    }
    

};
void pcVieja(compu* compus){

};
void pcMasterRaise(compu* compus){

};
