#include<stdio.h>
int main()
{
	int choice,amount, balance=1000;
	printf("Enter your choice:\n");
	printf("1.withdraw\n2.Deposit\n3.Check balance\n4.Exit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("Enter amount to withdraw:\n");
		scanf("%d",&amount);
		balance-=amount;
		printf("Remaining balance=%d\n",balance);
		break;
		case 2:
		printf("Enter amount to deposit:\n");
		scanf("%d",&amount);
		balance+=amount;
		printf("Remaining balance=%d\n",balance);
		break;
		case 3:
		printf("balance=%d\n",balance);
		break;
		case 4:
		printf("Exiting...\n");
		break;
		default:
		printf("Invalid input\n");
		break;
	}
	
	return 0;
}
