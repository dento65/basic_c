//TODO: check for palindrome

#include <stdio.h>
int main(){
    char str[100];
    gets(str);

    int l = 0; 
    while(str[l] != '\0'){
        l++;
    }
    
    int si = 0, ei = --l, pl= 1;
    while(si <= ei){
        if(str[si] != str[ei]){
            pl = 0;
            break;
        }
        si++;
        ei--;
    }

    if(!pl)
        printf("is a Palindrome\n");
     else
        printf("is not a Palindrome\n");

    return 0;
}