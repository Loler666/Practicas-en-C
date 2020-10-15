//ejem02.c
#include <stdio.h>
int main(){
float num1,num2,sum,res,mul,div;
int mod;
printf("\b Este programOwOn hace operaciones aritmeticas!!!! \n");
printf("\n Ingresa el primer numero:");
scanf("%f",&num1);
printf("\n Ingresa el segundo numero: ");
scanf("%f",&num2);
sum = num1 + num2;
res = num1 - num2;
mul = num1 * num2;
div = num1 / num2;
mod = "%d"num1 % "%d"num2;
printf("\n El resultado de la suma de %f y %f es:\t %f",num1,num2,sum);
printf("\n El resultado de la resta de %f y %f es:\t %f",num1,num2,res);
printf("\n El resultado del producto de %f y %f es:t %f",num1,num2,mul);
printf("\n El resultado de la division de %f y %f es:\t %f",num1,num2,div);
printf("\n El resultado del modulo es:\t %d",mod);
return 0;
}
