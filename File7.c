#include <stdio.h>
#define PIE 3.142
int main(int argc, char** argv)
{
	int r=5;
	double AREA,VOLUME;
	AREA=PIE*r*r;
	VOLUME=(4*AREA*r)/3;
	printf("The AREA of the CIRCLE is:%lf\n",AREA);
	printf("The VOLUME of the sphere is ;%lf\n",VOLUME);
	
	return 0;
}
