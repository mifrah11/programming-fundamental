#include <stdio.h>
int main() {
	
	float celsius, farenheit;
	printf("Enter the temperature in celsius:");
	scanf("%f",&celsius);
	farenheit=celsius*9.0/5.0+32;
	printf("the temperature in farenheit is:%f\n",farenheit);
	
	if(celsius >=30){
		printf("It's hot!stay hydrated and wear light clothes.\n");
	}
	else if(celsius >= 20 && celsius <= 28 ){ 
		printf("Nice weather perfect for outdoor activities.\n");
	}
	else if(celsius >=10 && celsius <=18){
		printf("Cool weather wear a light jacket.\n");
    }
    else if(celsius >=0 && celsius <=9){
    	printf("Cold! wear warm clothes.\n");
	}
	else {
	
		printf("Freezing! stay indoor and bundle up.\n");
	}
	return 0;
}