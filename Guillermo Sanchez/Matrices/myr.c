#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char nombre[30];
	char sexo[30];
	float sueldo;
}empleado;

void longitud(int *a);
empleado * crearempleado(empleado *,int );
void SolcitarDatos(empleado *,int);
void MostrarDatos(empleado *,int);
void sueldo(empleado *trav,int a);
void liberarDatos(empleado *);

void main()
{
	empleado *trav;
	int a;
	longitud(&a);
	trav=crearempleado(trav,a);
	SolcitarDatos(trav,a);
	MostrarDatos(trav,a);
	sueldo(trav,a);
	liberarDatos(trav);
	
}

void longitud(int *a)
{
	printf("Dame tu numero de empleado\n");
	scanf("%d",a);
}
empleado* crearempleado(empleado *trav,int a)
{
	trav=(empleado*)malloc(sizeof(empleado)*a);
	if(trav==NULL)
	{
		printf("No hay memoria disponible 1\n");
		exit(0);
	}
return trav;
}
void SolcitarDatos(empleado *trav,int a)
{	for (int i=0;i<a;i++)
	{
		printf("Empleado %d: \n",i+1);
		getchar();
		printf("Introduzca el nombre\n");
		scanf("%[^\n]",trav[i].nombre);
		getchar();
		printf("Hombre o Mujer ? \n");
		scanf("%[^\n]",trav[i].sexo);
		getchar();
		printf("Introduzca el sueldo\n");
		scanf("%f",&trav[i].sueldo);
	}	
}
void MostrarDatos(empleado *trav,int a)
{
	for(int i=0;i<a;i++)
	{
		printf("Persona %d: \n",i+1);
		printf("Nombre: %s \n",trav[i].nombre);
		printf("Sexo: %s \n",trav[i].sexo);
		printf("Sueldo: %f \n",trav[i].sueldo);

	}
}
void sueldo(empleado *trav,int a)
{
	float mayor=0;
	int k=0;
	float menor=0;
	int j=0;
	for(int i=0;i<a;i++)
	{
		if(mayor<trav[i].sueldo)
		{
			mayor=trav[i].sueldo;
			k=i;
		}
		else
		{
			if(menor>trav[i].sueldo)
			{
				menor=trav[i].sueldo;
				j=i;
			}
		}
	}
	printf("%s tiene el mayor sueldo de todos \n",trav[k].nombre);
	printf("%s tiene el menor sueldo de todos \n",trav[j].nombre);
}

void liberarDatos(empleado *trav)
{
	free(trav);
}






