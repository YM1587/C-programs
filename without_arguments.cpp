#include <stdio.h>
#define PIE 3.142

int radius;
int height;
double Surface_Area();
float circumference();
float circumference()
{
    return 2 * PIE * radius;
}

double Surface_Area()
{
    return circumference() * height;
}

int main()
{
    printf("Enter radius\n");
    scanf("%d", &radius);

    printf("Enter height\n");
    scanf("%d", &height);

    printf("The Surface area=%.2lf", Surface_Area());

    return 0;
}

Surface_Area()