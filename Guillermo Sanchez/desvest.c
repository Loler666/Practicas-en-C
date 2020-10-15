#include <stdio.h>
#include <math.h>
float media (float*ptr, int tam);
float desvStd (float*ptr, int tam);
int main(){
float arreglo [100];
int tamanio,i;

printf("\nIngrese cuantos datos desea meter");
scanf("%d", &tamanio);
for(i=0;i<tamanio;i++){
printf(" \nIngrese un numero %d", i+1);
scanf("%f", &arreglo[i]);
}

printf("\nLa media de %d datos es %f", tamanio, media(arreglo, tamanio));
printf("\nLa desviacion estandar de %d datos es %f", tamanio, desvStd(arreglo, tamanio));
return 0;
}

float media(float*ptr, int tam){
float prom, suma=0, *ptrini;

ptrini=ptr;
for(; ptr < ptrini+tam; ptr=ptr+1)
suma=suma+*ptr;
prom=suma/tam;
return prom;
}

float desvStd(float*ptr, int tam){
float ds, prom, suma=0, *ptrini;
ptrini=ptr;
prom= media(ptr,tam);
//printf("\nEl promedio es %f", prom);
for(; ptr<ptrini+tam; ptr=ptr+1)
suma=suma+pow(prom- *ptr,2);
//printf("\nLa suma es %f", suma);
ds=pow(suma/tam,0.5);
return ds;
}
