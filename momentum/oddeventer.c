#include<stdio.h>
void main()
{
	int num;
	printf("enter num:");
	scanf("%d",&num);

	(num%2==0)?printf("%d is even \n",num) : printf("%d is odd \n",num);
}