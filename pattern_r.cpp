#include <stdio.h>
int pattern();
int pattern()
{
	int i,j,n;
	n = 5;
	for(i =1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
		}
		return 0;
}
int main()
{
	pattern();
return 0;
}