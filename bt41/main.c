#include <stdio.h>
#include <stdlib.h>
float deQuy(int n)
{
	if(n == 1)
		return 0.5;
	return 1.0 / (1 + deQuy(n - 1));
}


int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);
    printf("\nDe quy %d = %f", n, deQuy(n));
	getch();
	return 0;
}
