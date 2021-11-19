#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int colec[3][12]={0}, rec[4]={0};
	printf("Recaudaciones:\n");
	for (int i=0; i<3; i++)
	{
		for (int k=0; k<12; k++)
		{
			printf("Linea %d, colectivo %d: ", i+1, k+1);
			scanf("%d", &colec[i][k]);
			rec[i+1]+=colec[i][k];
		}
		rec[0]+=rec[i+1];
	}
	for (int i=0; i<3; i++)
	{
		printf("La recaudacion de la linea %d es: %d\n", i+1, rec[i+1]);
	}
	printf("Las recaudaciones por coche son:\n");
	for(int i=0; i<3; i++)
	{
		for(int k=0; k<12; k++)
		{
			printf("%d ", colec[i][k]);
		}
		printf("\n");
	}
	printf("La recaudacion total general es de %d\n", rec[0]);
	return 0;
}
