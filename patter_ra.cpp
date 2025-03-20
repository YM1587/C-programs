#include <stdio.h>
int pattern(int n);
int pattern(int n)
{
	int i,j;
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
pattern(5);
return 0;
}
