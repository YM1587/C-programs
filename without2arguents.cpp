#include <stdio.h>
#include <cmath>
int base,height;
float hypt();
int Area();
float hypt()
{
	float x = base*base;
	float y = height*height;
	float hypt = sqrt(x+y);
	return hypt;
}
int Area()
{
	int area = base*height*0.5;
	return area;
}
int main()
{
	printf("Enter height\n");
	scanf("%d",&height);
	printf("Enter base\n");
	scanf("%d",&base);
	printf("The hypotenuse is %f\n",hypt());
	printf("The area is %d\n",Area());
	return 0;
}