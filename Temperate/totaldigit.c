#include<stdio.h>
void main()
{
	int n ,r, count=0;
	printf("enter the no:");
	scanf("%d",&n);
	while(n > 0)
	{
		r = r % 10;
		count++;
		n=n/10;
	}
	printf("\n no of digits are %d",count);
}
	