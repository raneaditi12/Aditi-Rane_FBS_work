#include<stdio.h>
void main()
{
	float salary=4500;
	float da,ta,hra,total;
	
	if(salary<=5000)
	{
		da=salary*0.10;
		ta=salary*0.20;
		hra=salary*0.25;
		
	}
	else
	{
		da=salary*0.15;
		ta=salary*0.25;
		hra=salary*0.30;
	}
	total=salary+da+ta+hra;
	printf("total salary is %f",total);
	
}