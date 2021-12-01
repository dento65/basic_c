//TODO: print matrix
#include <stdio.h>


int main(){
	int i, j, m,n;
	int arr[50][50];
	printf("Enter the no.of Rows:(less than 50) ");
	scanf("%d", &m);
	printf("Enter the no.of columns:(less than 50) ");
	scanf("%d", &n);
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n;j++){
			printf("Enter the element at [%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("the 2-d matrix is:\n");
	for(i = 0; i < m ;i++){
		for(j = 0; j < n; j++){
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
