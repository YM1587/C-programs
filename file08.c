#include <stdio.h>
int main(int argc, char** argv)
{
	int Num;
	printf("Enter Number:\n");
	scanf("%d",&Num);
	if (Num==1)
	{
		printf("Sunday");
	}
	else if(Num==2)
	{
		printf("Monday");
	}	
	else if(Num==3)
	{
		printf("Tuesday");
	}
	else if(Num==4)
	{
		printf("Thursday");
		
	}
	else if(Num==5)
	{
		printf("Friday");
	}
	else if(Num==6)
	{
		printf("Saturday");
	}
	else if(Num==7)
	{
		printf("Wednesday");
	}
	else
	{
		printf("INVALID NUMBER");
	}
	return 0;
}