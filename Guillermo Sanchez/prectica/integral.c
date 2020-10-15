#include <math.h>
#include <stdio.h>
int main (){
	float x,a,b,suma=0.0,dx,fx;
	int i,n;
	printf("\n ingrese el limite inferior");
	scanf("%f",&a);
	printf("\n ingrese el limite superior");
	scanf("%f",&b);
	printf("\n ingrese el numero de franjas");
	scanf("%d",&n);
	dx=(b-a)/n;
	x=a;
	for(i=2;i<=n;i=i+1){
		x=x+dx;
		fx=(3*pow(x,2))*2;
		suma= suma+fx;
	}
	x=x+dx;
	fx=3*pow(x,2);
	suma=suma+fx;
	suma=(suma*dx)/2;
	printf("la integral es %f",suma);
return 0;
}
