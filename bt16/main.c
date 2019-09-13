#include<stdio.h>
#include <math.h>

int tong(int n){
    tong=1;
for (int i=1;i<=n;i++)
{
    tong=tong+i;
}
}
float dequy(float x,int n){
if (n==1)
    return x;
    return dequy(x,n-1) + pow(x,n)/tong(n);

}



int main()
{
    float x,S;
	int  n;
	printf("\nNhap x: ");
	scanf("%f", &x);
	printf("\nNhap n: ");
	scanf("%d", &n);
    printf("\nTong la %f", dequy(x,n));
	return 0;
}
