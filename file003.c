#include <stdio.h>
int main(int argc, char** argv)
{
	int i;
	for (i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			printf("%d is even\n",i);
		}
		else
		{
			printf("%d is Odd\n",i);
		}
	}
	return 0;
}