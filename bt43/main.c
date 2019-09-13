#include <stdio.h>
#include <stdlib.h>

int deQuy(int n)
{
	if(n == 0)
		return 0;
	return deQuy(n / 10) + 1;
}


int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);
    printf("\nDe quy %d co %d chu so", n, deQuy(n));
	getch();
	return 0;
}
