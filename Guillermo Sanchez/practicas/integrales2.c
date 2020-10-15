#include <stdio.h>
#include <math.h>
int main(){
float suma=0.0, a, b, dx, fx, x;
int i, n;
printf("\nIngresa el limite inferior: ");
scanf("%f", &a);
printf("\nIngresa el limite superior: ");
scanf("%f", &b);
printf("\nIngrese el numero de franjas: ");
scanf("%d", &n);
dx=(b-a)/2;
x=a;
for(i=2; i<=n; i=i+1){
	x=x+dx;
	fx=(3*pow(x,2))*2;
	suma=suma+fx;
}
x=x+dx;
fx=3*pow(x,2);
suma=(suma*dx)/2;
printf("\nLa suma es: %f", suma);
return 0;
}
