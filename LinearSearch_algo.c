// TODO: use linear search
#include <stdio.h>
int main(){
	int key, i;
	int arr[7] = {3,5,34,5,343,43,3};
	printf("Enter the element : ");
	scanf("%d", &key);
	for(i = 0; i < 7; i++){
		if(arr[i] == key){
			printf("Elements positon %d", i+1);
			return 0;
		}
	}
		printf("Element is not present in the array");
		
	return 0;
}
