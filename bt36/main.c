#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int giaithua(int n){
if(n==1) return 1;
return n*giaithua(n-1);
}
float tinh(int n){
if (n==1) return 1;
return sqrt(giaithua(n)+sqrt(giaithua(n-1)));
}

int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("tong la:%f",tinh(n));
    return 0;
}
