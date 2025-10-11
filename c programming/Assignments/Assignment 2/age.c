#include<stdio.h>
void main() {
	int age;
	printf("enter your age: ");
	scanf("%d",&age);

	if(age<12)
		printf("child");
	else if(age<=19)
		printf("teenager");
	else if(age<=59)
		printf("Adult");
	else if(age>=60)
		printf("Senior");

}