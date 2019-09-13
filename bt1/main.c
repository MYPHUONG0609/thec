#include <stdio.h>
#include <stdlib.h>
 float  tong(int n) {
     if (n==1)
        return 1;
     else
        return 1/n + tong(n-1);
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("ket qua la:%f",tong(n));
    return 0;
}
