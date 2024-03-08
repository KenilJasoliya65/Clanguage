#include<stdio.h>
void main()
{
	int n1 , n2 , n3 , min;
	printf("enter first number:");
	scanf("%d",&n1);
	printf("enter second number:");
	scanf("%d",&n2);
	printf("enter third number:");
	scanf("%d",&n3);
	
	min = (n1<n2) ? ((n1<n3) ? n1 : n3) : ((n2<n3) ? n2:n3);
	
	printf("the minimum value is: %d\n" , min);
}
