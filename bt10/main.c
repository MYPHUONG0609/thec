#include <stdio.h>
#include <stdlib.h>

float mu(float x,int n){
    if (n==0) return 1;
    if  (n==-1) return 1/x;
    if (n<0) return mu(x,n+1)*1/x;
    else {
        if (n==0) return 1;
        else return mu(x,n-1)*x;
    }
}
int main()
{
    int n;
    float x=3;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("ket qua la:%f",mu(x,n));
    return 0;
}
