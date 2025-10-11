#include<stdio.h>
void main()
{
	int no=1;
	int sum=0;
	
	while(no<=5)
	{
		sum=(no+sum);
		no++;
	}
	printf("%d",sum);
	
}