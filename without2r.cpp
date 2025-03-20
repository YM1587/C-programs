#include <stdio.h>
#include <cmath>
void hypt(int base, int height);
void Area(int base, int height);
void hypt(int base, int height)
{
	float x = base*base;
	float y = height*height;
	float hypt = sqrt(x+y);
	printf("The hypotenuse is %f\n",hypt);
}
void Area(int base, int height)
{
	int area = base*height*0.5;
	printf("The area is %d",area);
}
int main()
{
	int base,height;
	printf("Enter height\n");
	scanf("%d",&height);
	printf("Enter base\n");
	scanf("%d",&base);
	hypt(base,height);
	Area(base,height);
	return 0;
}