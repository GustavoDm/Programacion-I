#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#define CANTIDAD 6

int main()
{
    int flagOrden;
    int lista[CANTIDAD]= {3,8,2,5,1,3};
    printf("Si desea ordenarlos de menor a mayor presione la tecla [0]\n\nSi desea ordenarlos de mayor a menor, presione la tecla [1]");
    scanf("%d", &flagOrden);
    if(flagOrden==1 || flagOrden ==0)
    {
        sort_mostrarArrayEnteros(lista, CANTIDAD);
        printf("\n\n-------------------------------------\n\n");


        if(!sort_ordenarArrayEnteros(lista, CANTIDAD, flagOrden))
        {
            sort_mostrarArrayEnteros(lista, CANTIDAD);

        }

    }
    else
    {

        printf("Error");
    }

    return 0;
}
