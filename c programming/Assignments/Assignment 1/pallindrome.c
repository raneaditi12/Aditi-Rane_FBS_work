#include<stdio.h>
void main()
{
	int a=121;
	int r1,r2,r3,rev;
	int q1;
	r1=a%10;
	q1=a/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r1;
	if(rev==a)
	{
	printf("no is pallindrome");
    }
    else
    {
    	printf("no is not pallindrome");
	}
	
	
	
}