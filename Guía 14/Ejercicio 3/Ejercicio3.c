#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int num[2][3]={0}, a=0, b=0;
	printf("Ingrese los contenidos de la matriz:\n");
	for(int i=0; i<2; i++)
	{
		for(int k=0; k<3; k++)
		{
			scanf("%d", &num[i][k]);
		}
	}
	for (int i=0; i<3; i++)
	{
		num[0][i]=num[0][i]*4;
	}
	for (int i=0; i<2; i++)
	{
		num[i][2]=num[i][2]*3;
	}
	a=num[0][0];
	for (int i=0; i<2; i++)
	{
		for (int k=0; k<3; k++)
		{
			if (a>num[i][k])
			{
				a=num[i][k];
			}
			b+=num[i][k];
		}
	}
	printf("El menor valor de la matriz es %d\n", a);
	printf("La suma de todos sus elementos es %d\n", b);
	for(int i=0; i<2; i++)
	{
		for(int k=0; k<3; k++)
		{
			printf("%d ", num[i][k]);
		}
		printf("\n");
	}
	return 0;
}
