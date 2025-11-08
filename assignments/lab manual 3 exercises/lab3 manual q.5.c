#include<stdio.h>
int main(){
	int time_period;
	float rate_interest,principle;
	float simple_interest=0;
	printf("Enter the time period in years(1-10):");
	scanf("%d",&time_period);
	if(time_period<1||time_period>10){
		printf("Invalid time period");return 1;
	}
	printf("Enter the principle(100-1000000):");
	scanf("%f",&principle);
	if(principle<100||principle>1000000){
		printf("Invalid principle");return 1;
	}
	printf("Enter the rate_interest(0.05-0.1):");
	scanf("%f",&rate_interest);
	if(rate_interest<0.05||rate_interest>0.1){
		printf("Invalid rate_interest");return 1;
	}
	
	simple_interest=(principle*time_period*rate_interest)/100;
	printf("Simple interest=%f",simple_interest);
	return 0;
}