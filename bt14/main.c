#include <stdio.h>
#include <stdlib.h>


float tong(float x,int n){
  if (n==1)
    return x;
  return pow(x,2*n-1)+ tong(x,n-1);
}

int main()
{
    int n;
    float x=2;
    printf("nhap n:");
    scanf("%d",&n);
    printf("ket qua la=%f",tong(x,n));
    return 0;
}
