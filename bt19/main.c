#include <stdio.h>
#include <math.h>

float giaithua(int n){
if (n==0) return 1;
return (2*n+1)*giaithua(2*n-1);
}
float tong(int x, int n){
if (n==0) return x;
return pow(x,2*n+1)/giaithua(n)+tong(x,n-1);
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
