#include<stdio.h>
void main() {
	int marks;

	printf("enter your marks: ");
	scanf("%d",&marks);

	if(marks>75)
		printf("Distinction");
	else if(marks>65)
		printf("first class");
	else if(marks>55)
		printf("second class");
	else if(marks>=40)
		printf("Pass class");
	else
		printf("Fail");

}