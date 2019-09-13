#include <stdio.h>
#include <stdlib.h>

float dequy(int x,int n){
if (n==0) return 0;
return pow(-1,n)*pow(x,2*n+1)+dequy(x,n-1);
}
int main(){
    int n;
    int x=2;
printf("nhap n");
scanf("%d",&n);
printf("tong la:%f",dequy(x,n));
return 0;
}
