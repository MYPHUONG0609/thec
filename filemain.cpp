#include<stdio.h>
#include<function.h>

int main() {

    int a=0;
    int b=0;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    int max=int find_max(a,b);
    printf("max is:%d",max);
    return 0;
}