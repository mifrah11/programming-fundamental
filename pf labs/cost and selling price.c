#include<stdio.h>
int main()
{int cp;
int sp;
printf("enter the cost price:");
scanf("%d",&cp);
printf("enter the selling price:");
scanf("%d",&sp);
if(cp<sp){
	printf("Profit");
}
if(cp>sp){
	printf("Loss");
}
if (cp==sp){
	printf("Neither loss nor profit");
}
return 0;
}