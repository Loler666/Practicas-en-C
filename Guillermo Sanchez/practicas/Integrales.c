#include <stdio.h>
#include <math.h>
int main(){
int i, n;
float suma=0.0, a, b, dx, fx, x;
printf("\nIngrese el limite inferior: ");
scanf("%f", &a);
printf("\nIngrese el limite superior: ");
scanf("%f", &b);
printf("\nIngrese el numero de franjas: ");
scanf("%d", &n);
dx=(b-a)/n;
x=a;
fx=3*pow(x,2);
suma=suma+fx;
for(i=2; i<=n; i=i+1){
	x=x+dx;
	fx=3*pow(x,2);
	suma=suma+fx;
}
x=x+dx;
fx=(3*pow(x,2))*2;
suma=suma+fx;
suma=(suma * dx)/2;
printf("\nLa suma es: %f", suma);
return 0;
}
