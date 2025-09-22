#include<stdio.h>
int main()
{int integer;
printf("Enter an integer:");
scanf("%d",&integer);
printf("%s\n",(integer>0)?"The given integer is positive":
          (integer<0)?"The given integer is negtive":
            "The given integer is zero");
return 0;
}