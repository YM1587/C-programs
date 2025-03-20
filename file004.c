#include <stdio.h>
int main(int argc, char** argv)
{
	int i=3;
	while(i<=12)
	{
	if (i%2==0)
	{
		printf("%d is Even\n",i);
	}	
	else
	{
		printf("%d is Odd\n",i);
	}
	i++;
	}
	return 0;
}