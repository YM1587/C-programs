#include <stdio.h>
#include <cmath>
int base,height;
void hypt();
void Area();
void hypt()
{
	float x = base*base;
	float y = height*height;
	float hypt = sqrt(x+y);
	printf("The hypotenuse is %f\n",hypt);
}
void Area()
{
	int area = base*height*0.5;
	printf("The area is %d",area);
}
int main()
{
	printf("Enter height\n");
	scanf("%d",&height);
	printf("Enter base\n");
	scanf("%d",&base);
	hypt();
	Area();
	return 0;
}