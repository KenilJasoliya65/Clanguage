#include<stdio.h>
void main()
{
	int n , s = 0, fd , ld;
	printf("enter num");
	scanf("%d",&n);
	ld = n %10;
	fd = n;
	while(n>=10)
	{
		n = n/10;
	}
	fd = n;
	s = fd + ld;
	printf("\n sum of first and last no: %d",s);
}