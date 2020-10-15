#ifndef _complejo_
#define _complejo_

	typedef struct
	{
		float real;
		float imagi;
	}Complejo;

	typedef Complejo *COMPLEJO;

	COMPLEJO crearComplejo();
	COMPLEJO asignaReal(COMPLEJO C1, float r);
	COMPLEJO asignaImaginario(COMPLEJO C1, float ima);
	float obtenReal(COMPLEJO C1);
	float obtenImaginario(COMPLEJO C1);
	COMPLEJO suma(COMPLEJO C1, COMPLEJO C2);
	COMPLEJO resta(COMPLEJO C1, COMPLEJO C2);
	COMPLEJO multi(COMPLEJO C1,COMPLEJO C2);
	COMPLEJO division(COMPLEJO C1,COMPLEJO C2);
	float modulo(COMPLEJO C1);
#endif




