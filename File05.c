#include <stdio.h>
int main(int argc, char** argv)
{
	int age;
	printf("Enter employees Age:\n");
	scanf("%d",&age);
	if (age>60)
	{
		printf("RETIRE");
	}
	return 0;
}