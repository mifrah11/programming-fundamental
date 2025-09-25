#include<stdio.h>
int main()
{
	float celsius, farenheit;
	printf("Enter temperature in celsius:");
	scanf("%f",&celsius);
	farenheit=celsius*9.0/5.0+32;
	//when input=0c=32f
	//-40c=-40f
	//100c=212f
	printf("Temperture in farenheit is:%f",farenheit);
	return 0;
}