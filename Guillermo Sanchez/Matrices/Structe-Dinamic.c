#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char Titulo[30];
	char Autor[30];
	float precio;
	int ayo;
}LIBRO;
void crearLibro(LIBRO **);
void SolcitarDatos(LIBRO *);
void MostrarDatos(LIBRO *);
void liberarDatos(LIBRO *);


void main()
{
	LIBRO *Lib;
	crearLibro(&Lib);
	SolcitarDatos(Lib);
	MostrarDatos(Lib);
	liberarDatos(Lib);
	
}
void crearLibro(LIBRO **Libro)
{
	*Libro=(LIBRO*)malloc(sizeof(LIBRO));
	if(Libro==NULL)
	{
		printf("No hay memoria disponible \n");
		exit(0);
	}
}
void SolcitarDatos(LIBRO *Libro)
{
	printf("Introduzca el titulo\n");
	scanf("%[^\n]",Libro->Titulo);
	getchar();
	printf("Introduzca el autor\n");
	scanf("%[^\n]",Libro->Autor);
	getchar();
	printf("Introduzca el precio\n");
	scanf("%f",&Libro->precio);
	printf("Introduzca el anio \n");
	scanf("%d",&Libro->ayo);
}
void MostrarDatos(LIBRO *Libro)
{
	printf("Titulo %s \n",Libro->Titulo);
	printf("Autor %s \n",Libro->Autor);
	printf("Precio %f \n",Libro->precio);
	printf("Titulo %d \n",Libro->ayo);
}
void liberarDatos(LIBRO *Libro)
{
	free(Libro);
}

