#include<stdio.h>
void main()
{
	int no=28;
	int i=1,sum=0;
	while(i<no)
	{
		if(no%i==0)
		sum=sum+i;
		i++;	
	}	
	if(sum==no)
	printf("no is perfect no");
	else
	printf("no is not perfect no");
	
}