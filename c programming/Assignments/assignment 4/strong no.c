#include<stdio.h>
void main()
{
	int no,sum,fact;
	printf("enter no of range: ");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		sum=0;
		fact=1;
		int rem;
		for(int j=1;j<=i;j++)
		{
			rem=no%10;
			fact=fact*j;
			
		}
		sum=sum+fact;
		no=no/10;
	if(sum==i)
	printf("%d ",i);
	
	}
	
}