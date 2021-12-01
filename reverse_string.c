//TODO: to revese a string

#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    int i = 0; 
    while(str[i] != '\0')
        i++;
    int si = 0, se= --i;

    while(si <= se){
        char temp = str[si];
        str[si] = str[se];
        str[se] = temp;
        si++;
        se--;
    }
    
    puts(str);
    return 0;
}