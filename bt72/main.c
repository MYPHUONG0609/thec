#include <stdio.h>
#include <stdlib.h>
int giaithua(int n){
if (n==0) return 0;
return n*giaithua(n-1);
}
float dequy(int x,int n){
if (n==0) return 0;
return pow(-1,n)*(pow(x,n)/giaithua(n))+dequy(x,n-1);
}
int main(){
    int n;
    int x=3;
printf("nhap n");
scanf("%d",&n);
printf("tong la:%f",dequy(x,n));
return 0;
}
