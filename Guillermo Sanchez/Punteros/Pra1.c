#include <stdio.h>
#include <stdlib.h>

//prototipos

void darTam(int *,int *);
int** crearMatriz(int,int);
void datosMatriz(int **,int,int);
void sumaTrianMatriz(int **,int **,int,int);
void mostraMatriz(int **,int,int);
void liberarDatos(int **,int);

void main()
{
	int **mtz1, **mtz2, fil, col;
	darTam(&fil,&col);
	mtz1=crearMatriz(fil,col);
	mtz2=crearMatriz(fil,col);
	datosMatriz(mtz1,fil,col);
	sumaTrianMatriz(mtz1,mtz2,fil,col);
	mostraMatriz(mtz1,fil,col);
	mostraMatriz(mtz2,fil,col);
	liberarDatos(mtz1,fil);	
	liberarDatos(mtz2,fil);	
}

void darTam(int *fil, int *col)
{
	printf("Introduzca el tamaño deseado: \n");
	scanf("%d",fil);
	while((*fil<2)||(*fil>10))
	{
	printf("Introduzca el tamaño deseado: \n");
	scanf("%d",fil);
	}
	*col=(*fil);
	
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
void datosMatriz(int**mtz,int fil,int col)
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
void sumaTrianMatriz(int ** mtz1,int ** mtz2,int fil,int col)
{
	for(int i=1;i<fil;i++)
	{
		for(int j=0;j<col;j++)
		{			
			mtz2[i][j]=mtz1[i][j]+mtz1[j][i];
		}
	}
	for(int i=1;i<fil;i++)
	{
		for(int j=1;j<col;j++)
		{
			mtz2[i][j]=0;
			
		}
	}

}
void mostraMatriz(int **mtz,int fil,int col)
{
	printf("Los datos de la Matriz %d son: \n", **mtz);
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

