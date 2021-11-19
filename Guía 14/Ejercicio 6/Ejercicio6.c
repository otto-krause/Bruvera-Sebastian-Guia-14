#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int torre[20][6]={0}, habpiso[21];
	printf("Habitantes por departamento por piso:\n");
	for (int i=0; i<20; i++)
	{
		for (int k=0; k<6; k++)
		{
			printf("Piso %d, depto %d: ", i+1, k+1);
			scanf("%d", &torre[i][k]);
			habpiso[i+1]+=torre[i][k];
		}
		habpiso[0]+=habpiso[i+1];
	}
	printf("Hay %d habitantes en la torre\n", habpiso[0]);
	for (int i=0; i<20; i++)
	{
		printf("Hay %d habitantes en el piso %d\n", habpiso[i+1], i+1);
	}
	return 0;
}
