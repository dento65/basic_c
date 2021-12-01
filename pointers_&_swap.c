//TODO: swapping using pointers

#include <stdio.h>
void s(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a = 2,b=3;
    s(&a,&b);
    printf("%d %d",a,b);
}
