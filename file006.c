#include <stdio.h>
int main(int argc, char** argv)
{
	char Name[50];
	printf("PLEASE ENTER YOUR NAME:\n");
	fgets(Name,50,stdin);
	printf("YOUR NAME IS:\t");
	puts(Name);
	return 0;
}