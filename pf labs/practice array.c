#include<stdio.h>
int main(){
	int i, arr[5];
	printf("enter marks of 5 subjects:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int total=0;
	for(i=0;i<5;i++){
		total+=arr[i];
	}
	float average;
	average=total/5.0;
printf("Total=%d\n",total);
printf("Average=%.2f\n",average);
	
	return 0;
}