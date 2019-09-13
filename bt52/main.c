#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	int min;

	do
	{
	printf("\nNhap n: ");
	scanf("%d", &n);
	}while(n < 0 && printf("\nLoi: n >= 0 !"));
	min = n % 10;
	if(n == 0)
		min = 0;

	do
	{
		i = n % 10;
	   if(i < min)
	   {
		   min = i;
	   }
	}while(n /= 10);

	printf("\nChu so nho nhat la %d", min);

	getch();
	return 0;
}
