#include <stdio.h>
#include <stdlib.h>


float tinhtong(int n)
{
	if(n == 1)
		return 1;
	return tinhtong(n - 1) + 1/(n * (n + 1));
}
int main()
{
	int n;
	printf("Nhap n: "); scanf("%d", &n);
    printf("ket qua la = %f", n, deQuy(n));
	return 0;
}
