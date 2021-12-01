//TODO: create student structure
#include <stdio.h>

struct Student{
    int roll_no;
    char name[20];
    float marks;
};


int main(){
    struct Student b[5];
    int n = 5;
    for(int i = 0; i < n; i++)
        scanf("%d %s %f",&b[i].roll_no,b[i].name,&b[i].marks);

    for(int i = 0 ;i < n; i++)
        printf("%d %s %f \n",b[i].roll_no,b[i].name,b[i].marks);

    return 0;
}