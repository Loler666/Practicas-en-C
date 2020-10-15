#include<stdio.h>
#include<stdlib.h>

//Prototipos de funciones

void darDimension(int *);
void crearArreglo(int **A,int);
void solicitarDatos(int *A,int);
void mostrarDatos(int *A,int elem);
void liberar(int *);

void main()
{
	int *A,elem;

	darDimension(&elem);
	crearArreglo(&A,elem);
	solicitarDatos(A,elem);
	mostrarDatos(A,elem);
	liberar(A);
}

void darDimension(int *elem)
{
	printf("Introduzca dimension\n");
	scanf("%d",elem);
}
void crearArreglo(int **A,int elem)
{
	*A=(int*)malloc(sizeof(int)*elem);
	if(*A==NULL)
	{
		printf("No hay memoria disponible\n");
		exit(0);
	}
}	
void solicitarDatos(int *A,int elem)
{
	int i;
	for(i=0;i<elem;i++)
	{
		printf("A[%d]=",i+1);
		scanf("%d",&A[i]);
	}
}
void mostrarDatos(int *A,int elem)
{
	int i;
	printf("Los elementos son:\n");
	for(i=0;i<elem;i++)
		printf("A[%d]=%d\n",i+1,A[i]);
}	
void liberar(int *A)
{
	free(A);
}

