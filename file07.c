#include <stdio.h>
int main(int argc, char** argv)
{
	int NUM1,NUM2;
	printf("Enter number1\n");
	scanf("%d",&NUM1);
	printf("Enter number2\n");
	scanf("%d",&NUM2);
	if (NUM1>NUM2)
	{
		printf("NUMBER 1 IS THE GREATEST:");
	}
	else
	{
		printf("NUMBER 2 IS THE GREATEST:");
	}
	return 0;
}