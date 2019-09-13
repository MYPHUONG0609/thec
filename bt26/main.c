#include <stdio.h>
#include <stdlib.h>

int demsouoc(int n){
int s=0;
for (int i=1;i<=n;i++){
    if (n%i==0){
        if (i%2==0)
            s=s+1;
    }
}
return s;
}
int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("so uoc chan la:%d",demsouoc(n));
    return 0;
}
