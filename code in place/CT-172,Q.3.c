#include<stdio.h>
int main()
{
int units;
float bill_amount;
//to calculate the electricity bill
printf("Enter the units consumed:\n");
scanf("%d", &units);

if (units<=100){//for first 100 units this condition is true
bill_amount=units*5.0;
}	
else if(units<=200){//for first 100 units the above condition is true and for the next units above 100 this statement is true
	bill_amount=(100*5.0)+((units-100)*7.0);
}
else {//for the units above 200 this condition is true
	bill_amount=(100*5.0)+(100*7.0)+((units-200)*10.0);
}
printf("the total units consumed: %d\n",units);
printf("Total electricity bill consumed: %.2f\n",bill_amount);
return 0;
}
