#include <stdio.h> 
int main() 
{
	int m1[3][3], m2[3][3], sub[3][3];
	
	printf("Matrix 1: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\n");
	printf("Matrix 2:\n ");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("Sub matrix: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			sub[i][j] = 0;
			sub[i][j] = m1[i][j] - m2[i][j];
			printf("%d \t", sub[i][j]);
		}
		printf("\n");
	}
}