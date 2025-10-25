#include<stdio.h>
int main()
{
	int day;
	char t1;
	printf("Enter the day(1-7):");
	scanf(" %d",&day);
	
	switch(day){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
	printf("Enter time (M=morning, E=evening):");
	scanf(" %c",&t1);
	switch(t1){
		case 'M':
			printf("Activity: Go to calss\n");
			break;
		case 'E':
			printf("Activity: Do homework\n");
			break;
		default:
			printf("Invalid time");		
	}
	break;
	    case 6: case 7:
	    	printf("Enter time(M=morning,E=evening):");
	    	scanf(" %c",&t1);
	switch(t1) {
		case 'M':
			printf("Activity: Play sports\n");
			break;
		case 'E':
			printf("Activity: Watch movie\n");
			break;
		default:
			printf("Invalid time");
	}
	break;
	default:
		printf("Invalid day");
		break;
	}
	return 0;
}