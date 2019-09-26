#include"headerfile.h"
int KiemTraNamNhuan(int nam)
{
	return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}
int TimSoNgayTrongThang(int thang, int nam)
{
	int NgayTrongThang;
	switch(thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		NgayTrongThang = 31;
		break;
	case 4: case 6: case 9 : case 11:
		NgayTrongThang = 30;
		break;
	case 2:
		int Check = KiemTraNamNhuan(nam);
		if(Check == 1)
		{
			NgayTrongThang = 29;
		}
		else
		{
			NgayTrongThang = 28;
		}
	}
	return NgayTrongThang;
}

void TimNgayKeTiep(int Ngay, int Thang, int Nam)
{
	int NgayTrongThang = TimSoNgayTrongThang(Thang, Nam);
	if (Ngay < NgayTrongThang)  
	{
		Ngay++;
	}
	else if (Thang < 12)     
	{
		Ngay = 1; Thang++;
	}
	else                      
	{
		Ngay = Thang = 1;
		Nam++;
	}
	printf("\nNgay ke tiep la: %d - %d - %d ", Ngay, Thang, Nam);
}