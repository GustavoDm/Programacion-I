int moverArray(int *arrayEnteros, int cantidad, int desde, int hasta, int sentidoOrden){

int i;
int aux;
int retorno=-1;
if(desde<=cantidad || desde>0){

for(i=desde;i>=hasta;i--){

 aux=arrayEnteros[i];
 arrayEnteros[i]=arrayEnteros[i-1];
 arrayEnteros[i-1]=aux;

}
}
return retorno;
}
