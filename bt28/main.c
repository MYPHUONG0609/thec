#include <stdio.h>
#include <stdlib.h>

int tongcacuoc(int n){
int s=0;
for (int i=1;i<n;i++){
    if (n%i==0)
            s=s+i;
}
return s;
}
int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("tong cac uoc so la:%d",tongcacuoc(n));
    return 0;
}
