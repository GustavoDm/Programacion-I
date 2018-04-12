#include <stdio.h>
#include <stdlib.h>
#include "sortv2.h"


int main()
{

    int desde, hasta, cantidad;
    int i;
    printf("Ingrese la cantidad de numeros que quiere ingresar (min 1, max 10): ");
    scanf("%d", &cantidad);
    int arrayEnteros[cantidad+1];

    for(i=0;i<cantidad;i++){
    printf("ingrese ahora el numero %d: ", i+1);
    scanf("%d", &arrayEnteros[i]);
    fflush(stdin);
    system("cls");
    printf("Ingrese desde que numero quiere moverse: ");
    scanf("%d", desde);
    fflush(stdin);
    printf("\n\nIngrese hasta que numero quiere moverse: ");
    scanf("%d", hasta);
    printf("\n\nIngrese el sentido al que quiere moverse");
    moverArray(*arrayEnteros[], cantidad, desde, hasta, sentido);


    }

    return 0;
}
