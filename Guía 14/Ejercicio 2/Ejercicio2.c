#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int num[2][3]={
		{4,16,5},
		{6,8,3}
	};
	for (int i=0; i<3; i++)
	{
		num[0][i]=num[0][i]*4;
	}
	for (int i=0; i<2; i++)
	{
		num[i][2]=num[i][2]*3;
	}
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
