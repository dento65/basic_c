//TODO: CHECK number is even or odd
#include <stdio.h>
void main(){
	int num;
	printf("Enter The Number to Check");
	scanf("%d", &num);
	
	if(num % 2 == 0)
	{
		printf("%d is Even", num);
	}
	else
		printf("%d is Odd", num);
}
