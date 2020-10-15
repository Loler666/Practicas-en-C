#include<stdio.h>
#include<stdlib.h>

//Prototipos de funciones

void darDimension(int *);
void crearArreglo(int **A,int);
void solicitarDatos(int *A,int);
void copiar(int *A,int *B, int);
void mayormenor(int *A,int *B, int);
void mostrarDatos(int *A,int elem);
void liberar(int *);

void main()
{
	int *A,*B,elem;

	darDimension(&elem);
	crearArreglo(&A,elem);
	crearArreglo(&B,elem);
	solicitarDatos(A,elem);
	copiar(A,B,elem);
	mayormenor(A,B,elem);
	printf("Tu numero mas grande es: ");
	mostrarDatos(A,elem);
	printf("\nTu numero mas pequeño es: ");
	mostrarDatos(B,elem);
	printf("\n");
	liberar(A);
	liberar(B);
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
void copiar(int *A,int *B, int elem)
{
	for(int i=0;i<elem;i++)
		B[i]=A[i];
}
void mayormenor(int *A,int *B,int elem)
{
	int i,j,piboteA,piboteB;
	for(i=0;i<elem;i++)
	{
		for(j=i;j<elem;j++)
		{
			if(A[i]<A[j])
			{
				piboteA=A[i];
				A[i]=A[j];
				A[j]=piboteA;
			}
		}
	}
	for(i=0;i<elem;i++)
	{
		for(j=i;j<elem;j++)
		{
			if(B[i]>B[j])
			{
				piboteB=B[i];
				B[i]=B[j];
				B[j]=piboteB;
			}
		}
	}
}
void mostrarDatos(int *A,int elem)
{
	int i;
	for(i=0;i<elem;i++)
		printf("%d",A[i]);
	
}	
void liberar(int *A)
{
	free(A);
}

