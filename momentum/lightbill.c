#include<stdio.h>
void main()
{
	int unit ,bill , finalbill;
	printf("enter unit:");
	scanf("%d",&unit);

	if(unit<=50)
	{
		bill = unit * 0.50;
		printf("under 50 unit bill %d \n",bill);
	}
	else if(unit>=51 && unit<=150)
	{
		bill = 25 + (unit - 50)*0.75;
		printf("50 unit up bill %d \n",bill);
	}
	else if(unit>=151 && unit<=250)
	{
		bill = 100 + (unit-150)*1.20;
		printf("100 up unit bill %d \n",bill);
	}
	else
	{
		bill = 220 + (unit - 250) * 1.50;
		printf("above 200 unit bill %d \n",bill);
	}
	
	finalbill=bill + (bill*20/100);
	printf("final bill %d \n",finalbill);
}