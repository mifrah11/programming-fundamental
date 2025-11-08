#include<stdio.h>
int main(){
	int a, b, temp;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("the swaped value of a:%d\n",a);
	printf("the swaped value of b:%d\n",b);
	return 0;
}