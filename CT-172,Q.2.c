#include<stdio.h>
int main()
{
	int side1,side2,side3;
	//take input sides of triangle
	printf("Enter side 1:");
	scanf("%d",&side1);
	printf("Enter side 2:");
	scanf("%d",&side2);
	printf("Enter side 3:");
	scanf("%d",&side3);
	//to check either the triangle is valid or not
	if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
		//if the given triangle is valid then check for other conditions
	  if (side1==side2&& side2==side3){
		printf("the given triangle is equilateral triangle");
	}
	  else if (side1==side2||side2==side3||side1==side3){
		printf("the given triangle is isoceles triangle");
	}
      else {
		printf("the given triangle is scalene triangle");
	}
}
   else {
		printf("The given triangle is not valid");
	}
	return 0;
}