#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, n,s;
	s=0;
	while(i <= n)
	{
		if(n % i == 0)
		s=s+i;
			i++;
	}
	return 0;
}
