#include <stdio.h>
int main(int argc, char** argv)
{
	float num=500,num1=50,num2=8999.9,sum,average;
	sum=num+num1+num2;
	average=sum/3;
	printf("The AVERAGE is:%f\n",average);
	printf("The SUM is:%f\n", sum);
	return 0;
}