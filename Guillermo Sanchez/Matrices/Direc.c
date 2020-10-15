#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int movil;
	int oficina;
	int casa;
}Telefono;

typedef struct
{
	char nombre[30];
	char nomdefam[30];
	char nomdesol[30];
	int edad;
	Telefono *tels;
}Persona;
void longitud(int *a, int*b);
Persona * crearPersona(Persona *,int ,int);
void SolcitarDatos(Persona *,int,int);
void MostrarDatos(Persona *,int,int);
void liberarDatos(Persona *);


void main()
{
	Persona *gens;
	int a, b;
	longitud(&a,&b);
	gens=crearPersona(gens,a,b);
	SolcitarDatos(gens,a,b);
	MostrarDatos(gens,a,b);
	liberarDatos(gens);

}
void longitud(int *a, int*b)
{
	printf("Dame tu numero de personas\n");
	scanf("%d",a);
	printf("Dame cuantos telefonos quieres por persona\n");
	scanf("%d",b);
}
Persona* crearPersona(Persona *people,int a, int b)
{
	people=(Persona*)malloc(sizeof(Persona)*a);
	if(people==NULL)
	{
		printf("No hay memoria disponible 1\n");
		printf("%p",people);
		exit(0);
	}
	for(int i=0;i<a;i++)
	{
		people[i].tels=(Telefono*)malloc(sizeof(Telefono)*b);
		if(people[i].tels==NULL)
		{
			printf("No hay memoria disponible 2\n");
			exit(1);
		}
	}
return people;
}
void SolcitarDatos(Persona *people,int a,int b)
{	for (int i=0;i<a;i++)
	{
		getchar();
		printf("Persona %d: \n",i+1);
		printf("Introduzca el nombre\n");
		scanf("%[^\n]",people[i].nombre);
		getchar();
		printf("Introduzca el Apellido Paterno\n");
		scanf("%[^\n]",people[i].nomdefam);
		getchar();
		printf("Introduzca el Apellido Materno\n");
		scanf("%[^\n]",people[i].nomdesol);
		getchar();
		printf("Introduzca la edad\n");
		scanf("%d",&people[i].edad);
		getchar();
		for(int j=0;j<b;j++)
		{
			printf("Introduzca el movil [%d][%d] \n",i+1,j+1);
			scanf("%d",&people[i].tels[j].movil);
			getchar();
			printf("Introduzca el telefono de oficina [%d][%d] \n",i+1,j+1);
			scanf("%d",&people[i].tels[j].oficina);
			getchar();
			printf("Introduzca el telefono de casa [%d][%d] \n",i+1,j+1);
			scanf("%d",&people[i].tels[j].casa);
			getchar();
		}
	}
}
void MostrarDatos(Persona *people,int a,int b)
{
	for(int i=0;i<a;i++)
	{
		printf("Persona %d: \n",i+1);
		printf("Nombre: %s \n",people[i].nombre);
		printf("Apellido Paterno: %s \n",people[i].nomdefam);
		printf("Apellido Materno: %s \n",people[i].nomdesol);
		printf("Edad %d \n",people[i].edad);
		for(int j=0;j<b;j++)
		{
			printf("Movil [%d][%d]: %d \n",a+1,b+1,people[i].tels[j].movil);
			printf("Telefono de oficina [%d][%d]: %d \n",a+1,b+1,people[i].tels[j].oficina);
			printf("Telefono de casa [%d][%d]: %d \n",a+1,b+1,people[i].tels[j].casa);
		}
	}
}
void liberarDatos(Persona *people)
{
	free(people);
}




