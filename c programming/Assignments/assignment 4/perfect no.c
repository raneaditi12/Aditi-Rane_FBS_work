#include<stdio.h>
void main()
{
	int no,sum;
	printf("enter no of range: ");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		
		sum=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		printf("%d ",i);
	}
	
}