#include <stdio.h>
int main(){
char car;
printf("Indique caracter: ");
car=getchar();
if(car>=65)
if(car<=90)
car=car+32;
printf("\n El caracter es: %c \t", car);
return 0;
}
