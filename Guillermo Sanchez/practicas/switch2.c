#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float suma(float a, float b);
float resta(float a, float b);
float mult(float a, float b);
float division(float a, float b);
float pot(float a, float b);
int menu();
int main(){
float x,y,z;
printf("\n Ingresa el primer numero ");
scanf("%f", &x);
printf("\n ingrese el segundo numero ");
scanf("%f", &y);
for(;;){
	switch(menu()){
	case 1:
	z=suma(x,y);
	printf("\n la suma de %f y %f es %f ",x,y,z);
	break;
	case 2:
	printf("\n la multiplicacion de %f y %f es %f ",x,y,resta(x,y));
	break;
	case 3:
	printf("\n la resta de %f y %f es %f ",x,y,mult(x,y));
	break;
	case 4:
	printf("\n la division de %f y %f es %f ",x,y,division(x,y));
	case 5:
	printf("\n la potencia de %f a la %f es %f ",x,y,pot(x,y));
	case 6:
	exit(0); 
	}
}
return 0;
}
float suma(float a, float b){
	float c;
	c=a+b;
	return c;
}

float resta(float a, float b){
	float c;
	c=a*b;
	return c;
}

float mult(float a, float b){
	float c;
	c=a-b;
	return c;
}

float division(float a, float b){
	float c;
	c=a/b;
	return c;
}

float pot(float a, float b){
	float c;
	for (int i=0; i==b; i++){
	c=a;
	c=c*b;
	}
	return c;

}

int menu(){
	int opcion;
	printf("\n ingresa una opcion");
	printf("\n 1.suma");
	printf("\n 2.multiplicacion");
	printf("\n 3.resta");
	printf("\n 4.division");
	printf("\n 5.potencia");
	printf("\n 6.salir");
	scanf("%d", &opcion);
	return opcion;
}
