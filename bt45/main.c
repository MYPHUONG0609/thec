#include <stdio.h>
#include <stdlib.h>
int main()
{
	int themang, n;
	int P;

	do
	{
	printf("\nNhap n: ");
	scanf("%d", &n);
	}
	P = 1;
	themang = n;

	while(themang != 0)
	{
		P = P * (themang % 10);
		themang = themang / 10;
	}
	printf("\nTich la %d", P);

	getch();
	return 0;
}
