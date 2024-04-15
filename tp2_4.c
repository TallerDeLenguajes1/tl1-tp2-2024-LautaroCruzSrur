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
    pcVieja(compus);
    pcMasterRaise(compus);

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
    int indicePcVieja = 0;
    for (int i = 0; i < 5; i++)
    {
        if(compus[i].anio < compus[indicePcVieja].anio){
            indicePcVieja = i;
        }
    }
    printf("La PC más vieja es la número %d:\n", indicePcVieja + 1);
    printf("Año: %d\n", compus[indicePcVieja].anio);
    printf("Velocidad: %d GHz\n", compus[indicePcVieja].velocidad);
    printf("Cantidad: %d\n", compus[indicePcVieja].cantidad);
    printf("Tipo de CPU: %s\n", compus[indicePcVieja].tipo_cpu);
    

};
void pcMasterRaise(compu* compus){
 int indicePcMaster = 0;
    for (int i = 0; i < 5; i++)
    {
        if(compus[i].velocidad > compus[indicePcMaster].velocidad){
            indicePcMaster = i;
        }
    }
    printf("La PC más rapida es la número %d:\n", indicePcMaster + 1);
    printf("Año: %d\n", compus[indicePcMaster].anio);
    printf("Velocidad: %d GHz\n", compus[indicePcMaster].velocidad);
    printf("Cantidad: %d\n", compus[indicePcMaster].cantidad);
    printf("Tipo de CPU: %s\n", compus[indicePcMaster].tipo_cpu);
};
