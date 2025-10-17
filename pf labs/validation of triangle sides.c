#include<stdio.h>
int main(){
	int a;
	printf("enter the 1st side:");
	scanf("%d", &a);
	int b;
	printf("enter the 2nd side:");
	scanf("%d", &b);
	int c;
	printf("enter the 3rd side:");
	scanf("%d", &c);
	if((a+b)>c && (b+c)>a && (c+a)>b){
		printf("valid traingle");
	}
	else{
		printf("invalid traingle");
	}
	return 0;
}