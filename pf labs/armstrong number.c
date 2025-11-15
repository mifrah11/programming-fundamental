#include<stdio.h>
int main(){
	int temp,digit,sum;
	for(int i=1;i<=500;i++){
		temp=i;
		sum=0;
		while(temp!=0){
		digit=temp%10;
		sum=sum+(digit*digit*digit);
		temp=temp/10;
	}
	if(sum==i){
		printf("%d\n",i);
	}
}
return 0;
}