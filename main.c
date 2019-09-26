#include"headerfile.h"
const int minyear=1900, maxyear=10000;
int main()
{
	int Ngay, Thang, Nam;

	do
	{
		printf("\nNhap nam: ");
		scanf("%d", &Nam);
		if(Nam < minyear || Nam > maxyear)
		{
			printf("\n nhap lai");
		}
	}while(Nam < minyear || Nam > maxyear);

	do
	{
		printf("\nNhap thang: ");
		scanf("%d", &Thang);
		if (Thang < 1 || Thang > 12)
			printf("\n nhap lai!");
	}while(Thang < 1 || Thang > 12);

	int NgayTrongThang = TimSoNgayTrongThang(Thang, Nam);
	do
	{
		printf("\nNhap ngay: ");
		scanf("%d",&Ngay);
		if(Ngay < 1 || Ngay > NgayTrongThang)
		{
			printf("\n nhap lai");
		}
	}while(Ngay < 1 || Ngay > NgayTrongThang);
	
	TimNgayKeTiep(Ngay, Thang, Nam);

	getch();
	return 0;
}
