#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int r=0;
	int a;
	while(n!=0){
	r=r*10;
	r=r+(n%10);
	n=n/10;
	}
	printf("Reverse of a number:%d",r);
}