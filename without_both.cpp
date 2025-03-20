#include <stdio.h>
#define PIE 3.142

int radius;
float circumference_result;
int height;
void circumference();
void Surface_Area();
void circumference()
{
    circumference_result = 2 * PIE * radius;
}

void Surface_Area()
{
    double x = circumference_result * height;
    printf("The surface area is %lf", x);
}

int main()
{
    printf("Enter radius\n");
    scanf("%d", &radius);
    printf("Enter height\n");
    scanf("%d",&height);
    
    circumference();
    Surface_Area();
    
    return 0;
}