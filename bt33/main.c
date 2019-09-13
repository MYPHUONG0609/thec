#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float tinhtong(int n){
if (n==1)
    return sqrt(2);
return sqrt(2+tinhtong(n-1));
}

int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("tong la :%f",tinhtong(n));
    return 0;
}
