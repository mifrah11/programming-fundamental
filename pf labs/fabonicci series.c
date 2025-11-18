#include<stdio.h>
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	int a=1;
	int b=1;
	int sum=1;
	printf("The 1st fabonicci number is:%d\n", a);
	if(n>=2){
		printf("the 2nd fabonicci number is:%d\n", b);
	}
	for(int i=3;i<=n;i++){
		sum=a+b;
		a=b;
        b=sum;
printf("The %dth fabonacci number is:%d\n",i,sum);
	}
	
}