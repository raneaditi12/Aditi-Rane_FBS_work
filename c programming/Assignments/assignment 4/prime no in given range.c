#include<stdio.h>
void main()
{
	int no;
	printf(" enter no of range: ");
	scanf("%d",&no);
	for(int i=2;i<=no;i++)
	{
		int n=i;
		int flag=0;
		for(int j=2;j<=n/2;j++)
		{
			if(n%j==0)
			{
				flag=1;
				break;
			}
			
			
		}
		if(flag==0)
		printf("%d ",n);
	}
}