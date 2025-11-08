#include<stdio.h>
int main(){
	int time;
	printf("enter the time in hours(1-5):");
	scanf("%d",&time);
	if(time<1||time>5){
		printf("error!");
	return 1;}
	float distance1,distance2,distance3,distance4,distance5;
	float average_speed, total_distance=0;
	if(time==1){
		printf("Enter the distance travelled in hour 1:");
		scanf("%f",&distance1);
		if(distance1<=0){
			printf("invalid distance");return 1;
		}
		total_distance+=distance1;
	}
	if(time==2){
			printf("Enter the distance travelled in hour 2:");
		scanf("%f",&distance2);
		if(distance2<=0){
			printf("invalid distance");return 1;
		}
		total_distance+=distance2;
		
	}
	if(time==3){
		printf("Enter the distance travelled in hour 3:");
		scanf("%f",&distance3);
		if(distance3<=0){
			printf("invalid distance");return 1;
		}
		total_distance+=distance3;
	}
	if(time==4){
		printf("Enter the distance travelled in hour 4:");
		scanf("%f",&distance4);
		if(distance4<=0){
			printf("invalid distance");return 1;
		}
		total_distance+=distance4;
	}
	if(time==5){
		printf("Enter the distance travelled in hour 5:");
		scanf("%f",&distance5);
		if(distance5<=0){
			printf("invalid distance");return 1;
		}
		total_distance+=distance5;
	}
	average_speed=total_distance/time;
	printf("total distance covered:%.2f\n",total_distance);
	printf("average speed:%.2f\n",average_speed);
	return 0;
}