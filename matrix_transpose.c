//TODO: matrix transpose

#include <stdio.h>

int main(){
	int m,n;
	int arr[100][100];
	int t[100][100];
	printf("Enter the number of Rows and collums:\n ");
	scanf("%d %d", &m,&n);
	printf("enter the 2-s matix:\n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i = 0; i < m; i++)
	{
		for(int j = 0 ; j < n;j++)
		{
			t[i][j] = arr[j][i];
		}
	}
	for(int i = 0; i < m ;i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d  ", t[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
