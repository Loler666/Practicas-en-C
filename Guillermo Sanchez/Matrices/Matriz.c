#include <stdio.h>
#include <stdlib.h>

//prototipos

void darDimension(int *,int *);
int** crearMatriz(int,int);
void solicitarDatos(int **,int,int);
void restaMatrizes(int **, int **, int **,int,int);
void mostrarDatos(int **,int,int);
void liberarDatos(int **,int);

void main()
{
	int **mtz1, **mtz2, **mtz3, fil, col;
	darDimension(&fil,&col);
	mtz1=crearMatriz(fil,col);
	mtz2=crearMatriz(fil,col);
	mtz3=crearMatriz(fil,col);;
	solicitarDatos(mtz1,fil,col);
	solicitarDatos(mtz2,fil,col);
	restaMatrizes(mtz1,mtz2,mtz3,fil,col);
	mostrarDatos(mtz3,fil,col);
	liberarDatos(mtz1,fil);
	liberarDatos(mtz2,fil);	
	liberarDatos(mtz3,fil);	
}

void darDimension(int *fil, int *col)
{
	printf("Introduzca las filas\n");
	scanf("%d",fil);
	printf("Introduzca las columnas\n");
	scanf("%d",col);
}
int** crearMatriz(int fil, int col)
{
	int i;
	int **mtz=(int **)malloc(sizeof(int*)*fil);
	if(mtz==NULL)
	{
		printf("No hay memoria disponible\n");
		exit(0);
	}
	for(i=0;i<fil;i++)
	{
		mtz[i]=(int *)malloc(sizeof(int)*col);
		if(mtz[i]==NULL)
		{
			printf("No hay memoria disponible\n");
			exit(1);
		}
	}
	return mtz;
}
void solicitarDatos(int**mtz,int fil,int col)
{
	int i,j;
	printf("Introduzca los datos\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{		
			printf("mtz[%d][%d]: ",i+1,j+1);
			scanf("%d",&mtz[i][j]);
		}
	}
}
void restaMatrizes(int **mtz1, int **mtz2, int **mtz3,int fil,int col)
{
	for(int i=0;i<fil;i++)
	{
		for(int j=0;j<col;j++)
		{		
			mtz3[i][j]=(mtz1[i][j])-(mtz2[i][j]);
		}
	}
}
void mostrarDatos(int **mtz,int fil,int col)
{
	printf("Los datos de la Matriz son: \n");
	for( int i=0;i<fil;i++)
	{
		for(int j=0;j<col;j++)
		{		
			printf("mtz[%d][%d]=%d\n ",i+1,j+1,mtz[i][j]);
		}
	}
}
void liberarDatos(int **mtz,int fil)
{
	int i;
	for(i=0;i<fil;i++)
	{		
		free(mtz[i]);
	}
	free(mtz);
}
	
