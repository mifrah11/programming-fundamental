#include <stdio.h>

int main()
{
	
for(int i=1;i<=5;i++)
{
for(int j=1;j<i;j++)
{
	for(int k=0;k<j;k++){
		printf("\t");
	}

	printf("*");
}
	printf("\n");
}
    return 0;
}
