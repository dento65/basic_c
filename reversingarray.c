//TODO: reverse an array
#include <stdio.h>

void r(int* arr, int n){
	int l = 0;
	int e = n - 1;
	
	while(l < e){
		int temp = arr[l];
		arr[l] = arr[e];
		arr[e] = temp;
		l++;
		e--;
	}
}

int main(){
	
	int arr[10] = {2,4,2,24,545,34,23,6345,311,34};
	 
	 r(arr,10);
	  for(int  i = 0;i < 10;i++)
	  printf("%d ",arr[i]);
	
	return 0;
}

