#include<stdio.h>
int main(){
	unsigned char num;
	printf("Enter 8-bit number(0-255):");
	scanf("%hhu",&num);
	
	printf("the original number is:%u\n",num);
	
	if(num &(1<<3)){
		num=num&~(1<<3);
		printf("4th bit was on now turned off\n");
	}
	else
	{printf("4th bit was already off\n");
	}
	if(num &(1<<6)){
		num=num&~(1<<6);
		printf("7th bit was on now turned off\n");
	}
	else
	{printf("7th bit was already off\n");
	}
	printf("new number after turning bits off:%u\n",num);
	return 0;
}