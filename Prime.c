//TODO: check whether a number is prime or not using functions
#include <stdio.h>

int p(int n){
	for(int i = 2; i <= n/2; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

void main(){
	int n;
	printf("Enter the number starting from 2 : ");
	scanf("%d", &n);
	
	if(p(n))
		printf("the number is prime\n");
	else
		printf("the number is not prime\n");
}
