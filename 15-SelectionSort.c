//TODO: use selection sort
#include <stdio.h>

void ss(int * arr, int l){
	for(int i = 0 ; i < l;i++)
	{
		int m = i;
		for(int j = i + 1; j < l;j++)
		{
			if(arr[m] > arr[j])
			{
				m = j;
			}
		}
		
		int t = arr[i];
		arr[i] = arr[m];
		arr[m] = t;
	}
}
int main(){
	int size, arr[8] = {23,442323,232,231,124,23,42,4123};
	ss(arr,8);
	for(int i = 0 ; i < 8; i++)
		printf("%d", arr[i]);
		
	return 0;
}



