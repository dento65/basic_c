//TODO:pattern
#include <stdio.h>
int main(){
	for(int i = 1; i <= 7; i++){
		for(int j = 1; j < i;j++){
			printf(" ");
		}
	
		for(int k = 7 ;k >= i; k--){
			printf("*");
		}
		
		for(int l = i ; l<= 7; l++){
			printf("*");
		}
		printf("\n");
		
	}
	
	return 0;
}
