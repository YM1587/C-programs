#include <stdio.h>
int main(int argc, char** argv)
{
	int r=5;
	const float PIE=3.142;
	float A,V;
	A=PIE*r*r;
	V=4/3*PIE*r*r*r;
	printf("The Area of the circle is:%f\n",A);
	printf("The Volume of the sphere is:%f\n",V);
	return 0;
}