
void main()
{
	int n=165;
	int rev=0;
	int rem ,original;
	original=n;

	
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==original)
	printf("no is pallindrome");
	else
	printf("no is not pallindrome");
}