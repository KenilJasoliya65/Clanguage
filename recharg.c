#include<stdio.h>
void main()
{
	int lan , rec;
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");
	scanf("%d",&lan);
	switch(lan)
	{
		case 1:
		printf("Press 1 for Internet Recharge\n");
		printf("Press 2 for Top-up Recharge\n");
		printf("Press 3 for Special Recharge\n");
		printf("enter your choice:");
		scanf("%d",&rec);
		switch(rec)
		{
			case 1:
				printf("You have successfully done an Internet Recharge.\n");
				break;
			case 2:
				printf("You have successfully done a Top-up Recharge.\n");
				break;
			case 3:
				printf("You have successfully done a special Recharge.\n");
				break;
			default:
				printf("invalid option.\n");
		}
		break;
		case 2:
		printf("internet recharge ke liye 1 dabaiye\n");
		printf("Top-up recharge ke liye 2 dabaiye\n");
		printf("Special recharge ke liye 1 dabaiye\n");
		printf("enter your choice:");
		scanf("%d",&rec);
		switch(rec)
		{
			case 1:
				printf("Aapne safaltapurvak Internet Recharge kar liya hai.\n");
				break;
			case 2:
				printf("Aapne safaltapurvak Top-up Recharge kar liya hai.\n");
				break;
			case 3:
				printf("Aapne safaltapurvak special Recharge kar liya hai.\n");
				break;
			default:
				printf("invalid option.\n");
		}
		break;
		case 3:
		printf("internet recharge mate 1 dabavo\n");
		printf("top-up recharge mate 2 dabavo\n");
		printf("special recharge mate 3 dabavo\n");
		printf("enter your choice:");
		scanf("%d",&rec);
		switch(rec)
		{
			case 1:
				printf("Tame safaltapurvak Internet Recharge karyu che.\n");
				break;
			case 2:
				printf("Tame safaltapurvak Top-up Recharge karyu che.\n");
				break;
			case 3:
				printf("Tame safaltapurvak special Recharge karyu che.\n");
				break;
			default:
				printf("invalid option.\n");
		}
		break;
		default:
			printf("invalid option.\n");
		}
}

		