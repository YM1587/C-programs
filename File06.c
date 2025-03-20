#include <stdio.h>
int main(int argc, char** argv)
{
	int age;
	printf("Enter employees age:\n");
	scanf("%d",&age);
	if (age>60)
	{
		printf("RETIRE");
	}
	else
	{
		printf("CONTINUE WORKING");
	}
	return 0;
}