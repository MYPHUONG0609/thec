#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int lietke;
    printf("nhap n:");
    scanf("%d",&n);for (int i=1;i<=n;i++){
    if (n%i==0){
        if (i%2==1) {
            lietke=i;
            printf("%d",lietke);
            printf("\n");
        }
    }
}
return 0;
}
