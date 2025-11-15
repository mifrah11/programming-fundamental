#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int original=n;
	int r=0;
	while(n!=0){
	r=r*10;
	r=r+(n%10);
	n=n/10;
	}
	printf("Reverse of a number:%d\n",r);
	
int sum;
sum=original+r;
printf("sum of number and its reverse:%d\n",sum);
}