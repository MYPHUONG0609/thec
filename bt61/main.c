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

	bool CheckGiamDan = true;
	int themang = n;
	int ChuSoCuoi = themang % 10;
	themang /= 10;

	printf("\nCac chu so cua %d co giam dan tu trai sang phai khong ?\n ", n);
	while(themang != 0)
	{
		int ChuSoKeCuoi = themang % 10;
		themang /= 10;
		if (ChuSoKeCuoi < ChuSoCuoi)
		{
			CheckGiamDan = false;
			break;
		}
		else
		{
			ChuSoCuoi = ChuSoKeCuoi;
		}
	}
	if(CheckGiamDan)
		printf("\Dung !");
	else
		printf("Sai !");


	getch();
	return 0;
}
