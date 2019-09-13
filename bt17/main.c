#include<stdio.h>
#include <math.h>
float giaithua(int n){
if (n==1) return 1;
return n*giaithua(n-1);
}
float tong(int x, int n){
if (n==1) return 1;
return pow(x,n)/giaithua(n)+tong(x,n-1);
}

int main()
{
    int n;
    int x=2;
    printf("nhap n:");
    scanf("%d",&n);
    printf("ket qua la:%f",tong(x,n));
    return 0;
}
