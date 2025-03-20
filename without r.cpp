#include <stdio.h>
#define PIE 3.142
void circumference(int r, float *result);
void Surface_Area(int r, int h);

void circumference(int r, float *result)
{
    *result = 2 * PIE * r;
}

void Surface_Area(int r, int h)
{
    float c;
    circumference(r, &c);
    double x = c * h;
    printf("The surface area is %lf", x);
}
int main()
{
	int r,h;
	printf("Enter radius\n");
	scanf("%d",&r);
	printf("Enter height\n");
	scanf("%d",&h);
	Surface_Area(r,h);
	return 0;
}