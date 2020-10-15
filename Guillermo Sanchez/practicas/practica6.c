#include<stdio.h>
int main(){
int anio;
printf("\n Ingresa el anio para saber si es bisiesto");
scanf("%d", &anio);
if(anio %4==0)
if(anio %100==0)
printf("\n no es bisiesto");
else
if(anio %400==0)
printf("\n bisiesto");
else
printf("\n no es bisiesto");
else
printf("\n no es bisiesto");
return 0;
}
