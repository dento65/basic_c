//TODO: to print an array 
#include <stdio.h>
int main(){
	int l;
	scanf("%d", &l);
	int arr[100];
	
	for(int i = 0; i <l; i++)
		scanf("%d", &arr[i]);
	
	for(int i = 0; i < l;i++)
		printf("%d ", arr[i]);
		
	return 0;
}
