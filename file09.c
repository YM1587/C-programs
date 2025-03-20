#include <stdio.h>
int main(int argc, char** argv)
{
	char grade;
	printf("PLEASE ENTER YOUR GRADE:\n");
	scanf("%c",&grade);
	if((grade=='A')||(grade=='a'))
	{
		printf("Excellent");
	}
	else if((grade=='B')||(grade=='b'))
	{
		printf("Good");
	}
	else if((grade=='C')||(grade=='c'))
	{
		printf("Satisfactory");
	}
	else if((grade=='D')||(grade=='d'))
	{
		printf("Pass");
	}
	else if((grade=='F')||(grade=='f'))
	{
		printf("Fail");
	}
	else 
	{
		printf("INVALID GRADE");
	}
		
	return 0;
}