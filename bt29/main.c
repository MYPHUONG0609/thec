#include <stdio.h>
#include <stdlib.h>
int deQuy(int n)
{
	if(n % 2 ==1)
		return n;
	return deQuy(n/2);
}
int main()
{
	int n;
	printf("nhap  n: "); scanf("%d", &n);
    printf("uoc so le lon nhat cua %d la %d", n, deQuy(n));
    return 0;
}
