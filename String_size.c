// TODO:size of string

#include <stdio.h>
int main(){
	char str[100];
	
	gets(str);
	
	int i = 0;

	while(str[i] != '\0'){
		i++;
	}
	
	printf("the size of the string is: %d\n", i);
	
	return 0;
}
