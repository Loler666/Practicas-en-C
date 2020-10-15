#include <stdlib.h>
#include "complejo.h"
#include <math.h>

void manejaError(int );
void mostrar(COMPLEJO);

COMPLEJO crearComplejo()
{
	COMPLEJO C;
	C=(COMPLEJO)malloc(sizeof(Complejo));
	if(C==NULL)
	{
		manejaError(0); //"No hay memoria disponible"
		exit(0);
	}
	return C;
}

COMPLEJO asignaReal(COMPLEJO C, float r)
{
	C->real=r;
	return C;
}

COMPLEJO asignaImaginario(COMPLEJO C, float ima)
{
	C->imagi=ima;
	return C;
}

float obtenReal(COMPLEJO C)
{
	return (C->real);
}

float obtenImaginario(COMPLEJO C)
{
	return (C->imagi);
}

COMPLEJO suma(COMPLEJO C1, COMPLEJO C2)
{
	COMPLEJO C3;
	C3=crearComplejo();
	C3=asignaReal(C3,obtenReal(C1)+obtenReal(C2));
	C3=asignaImaginario(C3,obtenImaginario(C1)+obtenImaginario(C2));
	return C3;
}

COMPLEJO resta(COMPLEJO C1, COMPLEJO C2)
{
	COMPLEJO C3;
	C3=crearComplejo();
	C3=asignaReal(C3,obtenReal(C1)-obtenReal(C2));
	C3=asignaImaginario(C3,obtenImaginario(C1)-obtenImaginario(C2));
	return C3;
}

COMPLEJO multi(COMPLEJO C1,COMPLEJO C2)
{
	COMPLEJO C3;
	C3=crearComplejo();
	C3=asignaReal(C3,(obtenReal(C1)*obtenReal(C2))+(-1*obtenImaginario(C1)*obtenImaginario(C2)));
	C3=asignaImaginario(C3,(obtenReal(C1)*obtenImaginario(C2))+(obtenImaginario(C1)*obtenReal(C2)));
	return C3;
}

COMPLEJO division(COMPLEJO C1,COMPLEJO C2)
{
	COMPLEJO C3;
	COMPLEJO C4;
	COMPLEJO C5;
	C3=crearComplejo();
	C4=crearComplejo();
	C5=crearComplejo();
	C4=asignaReal(C4,obtenReal(C2));
	C4=asignaImaginario(C4,-1*obtenImaginario(C2));
	C5=multi(C1,C4);
	C3=asignaReal(C3,obtenReal(C5)/((obtenReal(C2)*obtenReal(C2))+(obtenImaginario(C2)*obtenImaginario(C2))));
	C3=asignaImaginario(C3,obtenImaginario(C5)/((obtenReal(C2)*obtenReal(C2))+(obtenImaginario(C2)*obtenImaginario(C2))));
	return C3;
}

float modulo(COMPLEJO C1)
{
	float modulo;
	modulo=sqrt((obtenReal(C2)*obtenReal(C2))+(obtenImaginario(C2)*obtenImaginario(C2))
	return modulo;
}




