#include<stdio.h>
int main(){
	int a, b, c,d;
	printf("enter an integer a:");
	scanf("%d", &a);
	printf("enter an integer b:");
	scanf("%d", &b);
	printf("enter an integer c:");
	scanf("%d", &c);
	printf("enter an integer d:");
	scanf("%d",&d);
	if(a>b&&a>c&&a>d){
		printf("%d is greatest", a);
	}
	if(b>a&&b>c&&b>d){
		printf("%d is greatest",b);
	}
	if(c>a&&c>b&&c>d){
		printf("%d is greatest",c);
	}
	if(d>a&&d>b&&d>c){
		printf("%d is greatest",d);
	}
	return 0;
}