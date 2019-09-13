#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	do
	{
		printf("\nNhap vao n ( n > 0 ): ");
		scanf_s("%d", &n);

		if (n <= 0)
		{
			printf("\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ");
		}

	} while (n <= 0);

	int SoChuSo = (int)log10((float)n) + 1;
	int SoNghichDao = 0;
	int themang = n;

	printf("\nSo %d co phai la so doi xung hay khong ?\n", n);
	while (themang != 0)
	{
		int ChuSo = themang % 10;
		themang /= 10;
		SoNghichDao += ChuSo * pow(10.0, --SoChuSo);
	}

	if(SoNghichDao == n)
	{
		printf("Dung !");
	}
	else
	{
		printf("Sai !");
	}

	getch();
	return 0;
}
