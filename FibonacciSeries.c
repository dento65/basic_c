// TODO: print fibonacci series
#include <stdio.h>

 void main(){
	int a, b, n;
	printf("Enter the Limit");
	scanf("%d", &n);
	a = 1;
	 b = 1;
	printf("%d %d ", a, b);
	
	for(int i = 2; i <= n; i++){
		int c =  a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	
}
