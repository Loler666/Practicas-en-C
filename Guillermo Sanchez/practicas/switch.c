#include <stdlib.h>
#include <stdio.h>

int menu(){
	int opcion;
	printf("\n press 1 for belonings");
	printf("\n press 2 for feelings");
	printf("\n press 3 to exit");
	scanf("%d", &opcion);
	return opcion;
}

int main (){
	for(;;){
		switch(menu()){
			case 1: 
				printf("\n Greetings!");
				break;
			case 2:
				printf("\n Betrayal never comes from your enemies");
				break;
			case 3:
				exit(0);
			default:
				printf("Opcion invalida, ingrese una opcion de 1,2,3");
		}
	}
return 0;
}
