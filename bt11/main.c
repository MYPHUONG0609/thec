#include <stdio.h>
#include <conio.h>
int tong(int n)
{
	if(n == 1)
    return 1;
    int tich = 1;
	for(int i = 1; i <= n; i++)
	{
		tich *= i;
	}
	return tong(n - 1) + tich;
}


// --------------------------------------------
int main()
{
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);
    printf("ket qua = %d", tong(n));
	return 0;
}
