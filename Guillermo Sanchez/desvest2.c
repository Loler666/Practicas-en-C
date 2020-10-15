#include <stdio.h>
#include <math.h>
struct datoEst
{
float arreglo[100];
float*ptr;
int tamanio;
float media;
float desvStd;
};

void calcEstad (struct datoEst * ptrS);


int main(){

struct datoEst varS, *miptrS;
miptrS=&varS;
calcEstad(miptrS);

printf("\nLa media de %d datos es %f", miptrS->tamanio, miptrS->media);
printf("\nLa desviacion estandar de %d datos es %f", miptrS->tamanio, miptrS->desvStd);
return 0;
}

void calcEstad(struct datoEst * ptrS){
float suma=0;
printf("\nIngresa cuantos datos desea meter\t");
scanf("%d", &ptrS->tamanio);
for(ptrS->ptr=ptrS->arreglo; ptrS->ptr < &ptrS->arreglo[ptrS->tamanio]; ptrS->ptr++){
printf("\ningrese un numero %u\t", (int)(ptrS->ptr-ptrS->arreglo));
scanf("%f",ptrS->ptr);
}

for(ptrS->ptr=ptrS->arreglo; ptrS->ptr < &ptrS->arreglo[ptrS->tamanio]; ptrS->ptr++)
suma=suma + *ptrS->ptr;
ptrS->media=suma/(ptrS->tamanio);

suma=0;
for(ptrS->ptr=ptrS->arreglo; ptrS->ptr < &ptrS->arreglo[ptrS->tamanio]; ptrS->ptr++)
suma=suma + pow(ptrS->media+ *ptrS->ptr,2);
ptrS->desvStd=pow(suma/(ptrS->tamanio), 0.5);
}
