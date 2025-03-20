#include <stdio.h>
int main(int argc, char** argv)
{
	float Mark1,Mark2,Mark3,Mark4,average;
	printf("Enter Mark1\n");
	scanf("%f",&Mark1);
	printf("Enter Mark2\n");
	scanf("%f",&Mark3);
	printf("Enter Mark3\n");
	scanf("%f",&Mark3);
	printf("Enter Mark4\n");
	scanf("%f",&Mark4);
	average=((Mark1+Mark2+Mark3+Mark4)/4);
	printf("Average=%f\n",average);
	if(average>69)
	{
		printf("EXCELLENT!\n");
		printf("Your grade is:A");
	}
	else if(average>59)
	{
		printf("GOOD!\n");
		printf("Your grade is:B");
	}
	else if(average>49)
	{
		printf("SATISFACTORY\n");
		printf("Your grade is:C");
	}
	else if(average>39)
	{
		printf("PASS\n");
		printf("Your grade is:D");
	}
	else if(average<39)
	{
		printf("FAIL\n");
		printf("Your grade is:F");
	}
	else
	{
		printf("INVALID GRADE");
	}
	return 0;
}