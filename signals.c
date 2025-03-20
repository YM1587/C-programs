#include<stdio.h>
#include<signal.h>
void signalHandler(int signum)
{
	printf("Received signal:%d\n",signum);
}
int main(int argc, char** argv)
{
	signal(SIGINT,signalHandler);
	while(1)
	{
		
	}
	return 0;
}