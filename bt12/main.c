#include <stdio.h>
#include <stdlib.h>
float tong(float x, int n){
   if  (n==0)
    return 1;
   return pow(x,n)+tong(x,n-1);
}

int main()
{
    int n;
    float x=3;
    printf("nhap n:");
    scanf("%d",&n);
    printf("ket qua la:%f",tong(x,n));
    return 0;

}


