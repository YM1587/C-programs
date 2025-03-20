#include <stdio.h>
int main(int argc, char** argv)
{
	int i,j;
	for(i=1;i<=5;i+=1)
	{
		for(j=5;j>=1;j-=1)
		{
			printf("%c\t",'*');
		}
		printf("\n");
	}
	
	return 0;
}