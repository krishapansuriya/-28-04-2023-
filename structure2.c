#include<stdio.h>
main()
{
	int neutral;
	printf("Enter number=");
	scanf("%d",&neutral);
	if(neutral<0)
	{
		printf("your number is nagetive");
	}
	else if(neutral==0)
	{
		printf("your number is neutral");
	}
	else if(neutral>0)
	{
		printf("your number is possitive");
	}
}
