#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int SoNghichDao = 0;
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
	}while(n < 0 && printf("\nLoi: (n >= 0)"));

	printf("\nSo dao nguoc cua %d la: ", n);
	do
	{
		printf("%d", n % 10);
	}while(n /= 10);
	getch();
	return 0;
}
