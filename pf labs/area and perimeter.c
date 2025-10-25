#include<stdio.h>
int main()
{int length;
printf("Enter length:");
scanf("%d",&length);
int breadth;
printf("Enter breadth:");
scanf("%d", &breadth);
int area=length* breadth;
int perimeter=2*(length+breadth);
if(area>perimeter){
	printf("area is greater than perimeter");
}
if(area<perimeter){
	printf("area is less than perimeter");
}
if(area==perimeter){
	printf("area is equal to perimeter");
}
return 0;
}