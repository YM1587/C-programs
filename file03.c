#include <stdio.h>
int main(int argc, char** argv)
{
	char StudentName[50];
	printf("Please enter the STUDENT NAME:\n");
	fgets(StudentName,50,stdin);
	printf("The student name is:%c\n");
	puts(StudentName);
	return 0;
}