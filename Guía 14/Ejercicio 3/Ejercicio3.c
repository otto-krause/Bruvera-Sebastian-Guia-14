#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int num[2][3]={
		{4,16,5},
		{6,8,3}
	}, a=0, b=0;
	for (int i=0; i<3; i++)
	{
		num[0][i]=num[0][i]*4;
	}
	for (int i=0; i<2; i++)
	{
		num[i][2]=num[i][2]*3;
	}
	for (int i=0; i<2; i++)
	{
		for (int k=0; k<2; k++)
		{
			if (num[i][k]>num[i][k+1])
			{
				a=num[i][k+1];
			}
			else
			{
				a=num[i][k];
			}
		}
	}
	printf("El menor valor de la matriz es %d\n", a);
	for (int i=0; i<2; i++)
	{
		for (int k=0; k<3; k++)
		{
			b+=num[i][k];
		}
	}
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
