//TODO:factorial
#include <stdio.h>


void main(){
	int n;
	scanf("%d", &n);
	int p = 1;
	for (int i = 1;i <= n;i++)
	p *= i ;
	printf("%d", p);
	
	
}
