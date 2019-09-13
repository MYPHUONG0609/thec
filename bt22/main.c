#include <stdio.h>
#include <stdlib.h>
int tich(int n){
 int i;
 tich=1;
 while(i <= n)
	{
		if(n % i == 0)
			tich=tich*i;
			i++;
	}
}
int main()
{
	int  n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("tich cac uoc so la:%d",tich(n));
	return 0;
}
