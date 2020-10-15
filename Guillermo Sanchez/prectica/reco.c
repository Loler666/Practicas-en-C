#include <stdio.h>
int main (){
char cad[30];
printf("\n ingrese una cadena:");
fgets(cad);
int i;
for (i=0;cad[i]!='\0';i =i+1);
for(i=i-1;i>0;i=i-1)
printf("%c",cad[i]);
return 0;
}
