void main()
{
	float price=600;
	char ch='y';
	float discount=0,finalprice;
	if(ch=='y'||ch=='Y')
	{
		if(price>500)
		{
			discount=price*0.20;
		}
		else
		{
			discount=price*0.10;
		}
		
	}
	else
	{
		if(price>600)
		discount=price*0.15;
		else
		discount=0;
	}
	finalprice=price-discount;
	printf("discount : %f",discount);
	printf("\nfinal price is %f",finalprice);
}