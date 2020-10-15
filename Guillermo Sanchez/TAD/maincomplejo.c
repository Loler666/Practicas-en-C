#include <stdlib.h>
#include <stdio.h>
#include "complejo.h"

void manejaError(int);
void solicitarDatos(COMPLEJO);
void mostrar(COMPLEJO);
void liberar(COMPLEJO,COMPLEJO,COMPLEJO,COMPLEJO,COMPLEJO,COMPLEJO);

void main()
{
	COMPLEJO C1, C2, C3, C4, C5, C6;
	C1=crearComplejo();
	C2=crearComplejo();
	C3=crearComplejo();
	C1=crearComplejo();
	C2=crearComplejo();
	C3=crearComplejo();
	C4=crearComplejo();
	C5=crearComplejo();
	C6=crearComplejo();
	solicitarDatos(C1);
	solicitarDatos(C2);
	C3=suma(C1,C2);
	C4=resta(C1,C2);
	C5=multi(C1,C2);
	C6=division(C1,C2);
	mostrar(C3);
	mostrar(C4);
	mostrar(C5);
	mostrar(C6);
	liberar(C1,C2,C3,C4,C5,C6);
}

void solicitarDatos(COMPLEJO C)
{
	float r,ima;
	printf("Introduzca la parte Real\n");
	scanf("%f",&r);
	printf("Introduzca la parte Imaginaria\n");
	scanf("%f",&ima);
	C=asignaReal(C,r);
	C=asignaImaginario(C,ima);
}

void mostrar(COMPLEJO C)
{
	printf("Real: %f \n",obtenReal(C));
	printf("Imaginario: %f \n",obtenImaginario(C));
}

void manejaError(int e)
{
	char *errores[]={"No hay memoria disponible"};
	printf("%s",errores[e]);
}
void liberar(COMPLEJO C1, COMPLEJO C2, COMPLEJO C3, COMPLEJO C4, COMPLEJO C5, COMPLEJO C6)
{
	free(C1);
	free(C2);
	free(C3);
	free(C4);
	free(C5);
	free(C6);
}
