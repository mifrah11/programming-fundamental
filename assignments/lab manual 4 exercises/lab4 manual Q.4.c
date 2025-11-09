#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float discriminant;
	float real_part,imaginary_part;
	float root1, root2;
	
	printf("Enter the coefficients a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a==0){
		printf("The equation is not quadratic(a is not equal to 0)");
		return 0;
	}
	discriminant=b*b-4*a*c;
	if(discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("The roots are real and different\n");
		printf("root1=%.2f\n",root1);
		printf("root2=%.2f\n",root2);
	}
	else if(discriminant==0){
		root1=root2=-b/(2*a);
		printf("The roots are real and equal\n");
		printf("root1=root2=%.2f\n",root1);
	}
	else{
		real_part=-b/(2*a);
		imaginary_part=sqrt(-discriminant)/(2*a);
		printf("The roots are complex and different\n");
		printf("root1=%.2f+%.2fi\n",real_part,imaginary_part);
		printf("root2=%.2f-%.2fi\n",real_part,imaginary_part);
	}
	return 0;
}