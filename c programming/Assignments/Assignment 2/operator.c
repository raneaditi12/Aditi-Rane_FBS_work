#include<stdio.h>
void main() {
	int a=20,b=5;
	char op='*';
	int result;

	if(op=='+')
		printf("result %d",a+b);
	else if(op=='-')
		printf("result %d",a-b);
	else if(op=='/')
		printf("result %d",a/b);
	else if(op=='*')
		printf("result %d",a*b);
	else if(op=='%')
		printf("result %d",a%b);
	else
		printf("invalid operator");
}