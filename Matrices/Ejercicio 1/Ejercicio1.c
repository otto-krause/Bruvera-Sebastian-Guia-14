#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	int num[2][3]={
		{4,47,7},
		{7,84,78}
	};
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
