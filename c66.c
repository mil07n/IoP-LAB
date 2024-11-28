#include <stdio.h> 
int main() {
	int m1[3][3], m2[3][3], sum[3][3];
	
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
            printf("Matrix A:");
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\n\n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
            printf("Matrix B: ");
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("\n\nsum matrix: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			sum[i][j] = 0;
			sum[i][j] = m1[i][j] + m2[i][j];
			printf("%d \t", sum[i][j]);
		}
		printf("\n");
	}
}