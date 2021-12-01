//TODO: use binary search
#include <stdio.h>

int bs(int* arr, int l, int key){
	int lower = 0;
	int upper = l - 1;
	
	while(lower < upper){
		int mid = (lower + upper ) / 2;
		if(key > arr[mid])
		{
			lower = mid + 1;
		}
		else if(key < arr[mid])
		{
			upper = mid - 1;
		}
		else 
		{
			return mid;
		}
	}
	return(0);
}

int main(){
	int arr[7] = { 34,31,53,65,45,23,21};
	int k = 23;
	if(bs(arr,7,k) == 0)
		printf("the element is not present\n");
	else 
		printf("the element is present at %d",bs(arr,7,k));
	
	
	return 0;
}
