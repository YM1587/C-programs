#include <stdio.h>
void pattern(int n);
void pattern(int n)
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
}
int main()
{
pattern(5);
return 0;
}
