#include <stdio.h>
#include <stdlib.h>

float tong(int n){
if (n==1) return 1;
float tam=1;
 for (int i=1; i<=n;i++){

    tam=tam+i;
}
return 1/tam + tong(n-1);
}
int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("ket qua la=%f",tong(n));
    return 0;
}
