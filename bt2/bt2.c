#include <stdio.h>
#include <stdlib.h>
int tong(int n) {
 if (n==1)
    return 1;
 else return n*n+ tong(n-1);
}

int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("ket qua la %d",tong(n));
    return 0;
}
