#include <stdio.h>
#include <stdlib.h>

float giaithua(int n){
if (n==1) return 2;
return 2*n*giaithua(2*n-2);
}
float tong(int x, int n){
if (n==1) return 1;
return pow(x,2*n)/giaithua(n)+tong(x,n-1);
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
