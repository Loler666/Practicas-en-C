#include<stdio.h>
int main(){
char sexo;
printf("\n Ingrese el genero M/F: ");
sexo=getchar();
if(sexo==77 | sexo==109)
printf("\n Es de genero masculino");
if(sexo==70 | sexo==102)
printf("\n Es de genero femenino");
if(sexo>=0 & sexo<70 | sexo>70 & sexo<77 | sexo>77 & sexo<102 | sexo>102 & sexo<109 | sexo>109)
printf("\n Genero desconocido o caracter erroneo, porvafor intenta de nuevo");
return 0;
}
