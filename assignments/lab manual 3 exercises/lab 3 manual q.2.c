#include<stdio.h>
int main(){
	int salary, final_salary;
	float tax, tax_rate;
	printf("Enter your salary:");
	scanf("%d", &salary);
	printf("Enter tax rate:");
	scanf("%f", &tax_rate);
	tax=salary*tax_rate;
	final_salary=salary-tax;
	printf("total tax is:%.2f\n", tax);
	printf("your salary after cutting tax is:%d\n",final_salary);
	return 0;
}