#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char Titulo[30];
	char Autor[30];
	float precio;
	int ayo;
}LIBRO;

void SolcitarDatos(LIBRO *);
void MostrarDatos(LIBRO *);

void main()
{
	LIBRO Lib;
	SolcitarDatos(&Lib);
	MostrarDatos(&Lib);
}
void SolcitarDatos(LIBRO * Libro)
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
void MostrarDatos(LIBRO* Libro)
{
	printf("Titulo %s \n",Libro->Titulo);
	printf("Autor %s \n",Libro->Autor);
	printf("Precio %f \n",Libro->precio);
	printf("Titulo %d \n",Libro->ayo);
}

