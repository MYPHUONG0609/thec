#include <stdio.h>
#include <stdlib.h>
float tinhtong(int n)
{
	if(n == 1)
		return 0.5;
	return tinhtong(n - 1) +  n / (n + 1);
}
int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);
	printf("\nDe quy(%d) = %f", n, tinhtong(n));
    getch();
	return 0;
}
