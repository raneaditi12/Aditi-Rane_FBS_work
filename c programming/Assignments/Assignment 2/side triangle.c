#include<stdio.h>
void main() {
	int s1=120,s2=90,s3=90;
	
	if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2) {
		if(s1==s2 && s2==s3)
			printf("triangle is evuilateral");
		else if (s1==s2 || s2==s3 || s1==s3)
			printf("triangle is isosceles");
		else
			printf("triangle is scalene");
	} 
	else
		printf("given sides do not form triangle");
}