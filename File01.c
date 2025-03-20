#include <stdio.h>
int main(int argc, char** argv)
{
float X,Y,Z,sum;
double product;
printf("Enter X\n");
scanf("%f",&X);
printf("Enter Y\n");
scanf("%f",&Y);
printf("Enter Z\n");
scanf("%f",&Z);
sum=X+Y+Z;
product=X*Y*Z;
printf("The sum of your values is:%f\n",sum);
printf("The product of your values is:%lf ",product);
	return 0;
}