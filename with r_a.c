#include <stdio.h>
#define PIE 3.142
float circumference(int r);
double Surface_Area (int r,int h);
float circumference(int r)
{
	return 2*PIE*r;
}
double Surface_Area(int r,int h)
{
	return circumference(r)*h;
}
int main()
{
	int r,h;
	printf("Enter radius\n");
	scanf("%d",&r);
	printf("Enter height\n");
	scanf("%d",&h);
	printf("The Surface area=%.2lf",Surface_Area(r,h));
	return 0;
}