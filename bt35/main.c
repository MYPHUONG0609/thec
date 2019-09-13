#include <stdio.h>
#include <stdlib.h>
float tinhtong(int n,int i){
if (n==1) return 1;
for (i=1;i<=n;i++){
    return (i,tinhtong(n,i+1));
}
}

int main()
{
    int i,n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("ket qua la:%f",tinhtong(n,i));
    return 0;
}
