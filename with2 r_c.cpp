#include <stdio.h>
#include <cmath>
float hypt(int base, int height);
int Area(int base, int height);
float hypt(int base, int height)
{
	float x = base*base;
	float y = height*height;
	float hypt = sqrt(x+y);
	return hypt;
}
int Area(int base, int height)
{
	return 0.5*base*height;
}
int main()
{
	int base,height;
	printf("Enter height\n");
	scanf("%d",&height);
	printf("Enter base\n");
	scanf("%d",&base);
	printf("The hypotenuse is %f\n",	hypt(base, height));
	printf("The area is: %d",Area(base,height));
	return 0;
}