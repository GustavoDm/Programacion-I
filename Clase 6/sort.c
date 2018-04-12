#include <stdio.h>
#include <stdlib.h>

int swapEnteros(int *primerEntero, int *segundoEntero);

int sort_ordenarArrayEnteros(int *array, int cantidad, int flagOrden)
{
    int i;
    int flagSwap;

    if(cantidad>0)
    {
        do
        {
            flagSwap=0;
            for(i=0; i<cantidad-1; i++)
            {
                if((array[i]<array[i+1]&& flagOrden) || (array[i]> array[i+1] && !flagOrden))
                {
                    swapEnteros(&array[i], &array[i+1]);
                    flagSwap=1;
                }
            }
        }
        while(flagSwap);
    }
    return 0;
}


int sort_mostrarArrayEnteros(int *array, int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {

        printf("%d", array[i]);
    }
    return 0;
}

int swapEnteros(int *primerEntero, int *segundoEntero)
{
    int aux;
    aux=*primerEntero;
    *primerEntero=*segundoEntero;
    *segundoEntero=aux;

    return 0;
}
