#include<stdio.h>
int main(){
	int cost;
	float discount, remaining_amount,saved_amount;
	printf("Enter the cost of item:");
	scanf("%d", &cost);
	
	if(cost<2000){
		discount=0;
		saved_amount=cost*0;
		remaining_amount=cost-saved_amount;
	}
	else if(cost>=2000 && cost<=4000){
		discount=0.2;
		saved_amount=cost*0.2;
		remaining_amount=cost-saved_amount;
	
	}
	else if(cost>=4001 && cost<=6000){
		discount=0.3;
		saved_amount=cost*0.3;
		remaining_amount=cost-saved_amount;
	}
	else if(cost>6000){
		discount=0.5;
		saved_amount=cost*0.5;
		remaining_amount=cost-saved_amount;
	}
	else{
		printf("error!");
	}
	printf("actual amount=%d\n",cost);
	printf("remaining amount=%.2f\n",remaining_amount);
	printf("saved amount=%.2f\n",saved_amount);
	return 0;
}