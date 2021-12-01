//TODO: display charactres of a string using pointers
#include <stdio.h>
int main(){
    char str[100];
    gets(str);

    char* p = str;

    while(*p != '\0'){
        printf("%c", *p);
        p++;
    }

    return 0;
}