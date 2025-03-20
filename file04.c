#include <stdio.h>
int main(int argc, char** argv)
{
	char Gal_Friend_Name[50];
	printf("PLEASE ENTER YOUR GIRLFRIENDS NAME:\n");
	fgets (Gal_Friend_Name,50,stdin);
	printf("Your gal friends name is:%c\n");
	puts(Gal_Friend_Name);
	return 0;
}