#include <stdio.h>
int main()
{
	int Amountspent,Netamount;
	printf("Please enter Amount you spent:\n");
	scanf("%d\n",&Amountspent);
	switch(Amountspent)
	{
	case 10000 ... 14999:
		Netamount=Amountspent-((10*Amountspent)/100);
		printf("%d",Netamount);
		break;
	case 15000 ... 24999:
		Netamount=Amountspent-((15*Amountspent)/100);
		printf("%d",Netamount);
		break;
	case 25000 ... 29999:
		Netamount=Amountspent-((20*Amountspent)/100);
		printf("%d",Netamount);
		break;
	case 30000 ... 45000:
		Netamount=Amountspent-((25*Amountspent)/100);
		printf("%d",Netamount);
		break;
	default:
		printf("NO DISCOUNT CAN BE PROVIDED FOR THAT AMOUNT PLEASE");
	}
	
	return 0;
}