#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the age of Ram:");
	scanf("%d", &a);
	printf("Enter the age of shyam:");
	scanf("%d", &b);
	printf("Enter the age of ajay:");
	scanf("%d",&c);
	if(a<b&&a<c){
		printf("Ram is youngest");
	}
	if(b<c&&b<a){
		printf("shyam is youngest");
	}
	if(c<a&&c<b){
		printf("ajay is youngest");
	}
}