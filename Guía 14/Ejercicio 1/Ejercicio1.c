#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int num[2][3]={0};
	for(int i=0; i<2; i++)
	{
		for(int k=0; k<3; k++)
		{
			scanf("%d", &num[i][k]);
		}
	}
	printf("La matriz es:\n");
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
