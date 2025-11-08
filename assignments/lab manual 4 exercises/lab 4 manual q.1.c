#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>='a'&& ch<='z'){
		printf("The given character is small alphabet");
	}
	else if(ch>='A'&&ch<='Z'){
		printf("The given character is capital alphabet");
	}
	else if(ch>='0'&& ch<='9'){
		printf("The given character is a digit");
	}
	else if(ch=='*'||ch=='+'||ch=='/'||ch=='-'||ch=='%'){
		printf("The given character is special character");
	}
	else{
		printf("Invalid input");
	}
	return 0;
}