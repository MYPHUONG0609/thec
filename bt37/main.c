#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float tinh(int n){
if (n==1) return 1;
return pow((n+tinh(n-1)),1/n);
}

int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("tong la:%f",tinh(n));
    return 0;
}
