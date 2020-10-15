#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>

//Prototipos de funciones

void frase(char *A);
void procesar(char *A,char *B);

void main()
{

	char A[100],B[100];
	frase(A);
	procesar(A,B);
	printf("Tu cadena de minusculas es: \n%s\n",A);
	printf("Tu cadena de mayusculas es: \n%s",B);
	
}
void frase(char *A)
{
	printf("Dame tu frase: ");
	scanf("%[^\n]",A);
	getchar();
}
void procesar(char *A, char *B)
{
	int palabras=strlen(A);
	for(int i=0;i<palabras+1;i++)
	{
		if(isupper(*A[i]))
		{
			char letra=*A[i];
			if(letra==*A[1])			
				strcpy( *B, letra);
			strcat(*B, letra);
			*A[i]='*';
		}
	}
}

