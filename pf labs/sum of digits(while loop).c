#include<stdio.h>
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
int sum=0;
int lastDigit=0;
while(n!=0){
	lastDigit=n%10;
	if(lastDigit%10==0){
	sum=sum+lastDigit;
	n=n/10;}
}
printf("The sum ofeven number of digits is:%d",sum);

}