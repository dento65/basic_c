//TODO: implement bubble sort
#include <stdio.h>

void bs(int* arr, int l){
	
	for(int i = 0 ; i < l -1 ; i++)
	{
		for(int j = 0 ; j < l - i -1;j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

void main(){
	int arr[7]={3,5,34,5,34,4,8};
	
	bs(arr,7);
	printf("the sorted array  is\n: ");
	for(int i = 0; i < 7; i++){
		printf("%d ", arr[i]);
	}
	
}
