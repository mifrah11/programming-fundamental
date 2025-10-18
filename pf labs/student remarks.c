#include<stdio.h>
int main(){
	int percent;
	printf("Enter the percentage:");
	scanf("%d", &percent);
	if(percent>=91&&percent<=100){
		printf("Excellent");
	}
	else if(percent>=81&&percent<=90){
		printf("Very good");
	}
	else if(percent>=71&&percent<=80){
		printf("Good");
	}
	else if(percent>=61&&percent<=70){
		printf("Can do better");
	}
	else if(percent>=51&&percent<=60){
		printf("Average");
	}
	else if(percent>=41&&percent<=50){
		printf("Below average");
	}
	else if(percent<=40){
		printf("Fail");
	}
	return 0;
}