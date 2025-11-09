#include<stdio.h>
int main(){
	int num,remaining,last_digit;
	printf("Enter the number:");
	scanf("%d",&num);
	remaining=num;
	while(remaining>7||remaining<-7){
		last_digit=remaining%10;
		remaining=remaining/10;
		remaining=remaining-(2*last_digit);
	}
	if(remaining==7||remaining==0||remaining==-7){
		printf("The number is divisible by 7");
	}
	else{
		printf("The number is not divisible by 7");
	}
	return 0;
}