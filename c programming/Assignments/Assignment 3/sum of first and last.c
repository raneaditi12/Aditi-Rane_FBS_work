void main() 
{

	int no=1234;
	int fd,ld;
	int sum;
	ld=no%10;
	while(no>0) {
		fd=no%10;
		no=no/10;
	}
	sum=fd+ld;
	printf("%d",sum);
	
}