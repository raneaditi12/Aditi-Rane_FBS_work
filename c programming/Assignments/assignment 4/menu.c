void main() {
	int num=121;
	int choice=0;
	int i,temp,rem,rev,sum,flag;

	while(choice!=7) {
		printf("number =%d\n",num);
		printf("1.check even or odd\n");
		printf("2.check prime or not\n");
		printf("3.check pallindrome or not\n");
		printf("4.check positive,negative or zero\n");
		printf("5.check reverse the no\n");
		printf("6.find sum of digits\n");
		printf("7.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		if (choice==1) {
			if (num%2==0)
				printf("no is even");
			else
				printf("no is odd");

		} else if(choice==2) {
			flag = 0;
            if(num <= 1)
                flag = 1;
            else {
                for(i = 2; i <= num / 2; i++) {
                    if(num % i == 0) {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0)
                printf("Prime Number\n");
            else
                printf("Not Prime\n");
		} else if(choice==3) {
			temp = num;
			rev = 0;
			while(temp != 0) {
				rem = temp % 10;
				rev = rev * 10 + rem;
				temp = temp / 10;
			}
			if(rev == num)
				printf("Palindrome Number\n");
			else
				printf("Not Palindrome\n");
		}

		else if(choice == 4) {
			if(num > 0)
				printf("Positive Number\n");
			else if(num < 0)
				printf("Negative Number\n");
			else
				printf("Number is Zero\n");
		}

		else if(choice == 5) {
			temp = num;
			rev = 0;
			while(temp != 0) {
				rem = temp % 10;
				rev = rev * 10 + rem;
				temp = temp / 10;
			}
			printf("Reverse = %d\n", rev);
		}

		else if(choice == 6) {
			temp = num;
			sum = 0;
			while(temp != 0) {
				rem = temp % 10;
				sum = sum + rem;
				temp = temp / 10;
			}
			printf("Sum of Digits = %d\n", sum);
		}

		else if(choice == 7) {
			printf("Exiting...\n");
		}

		else {
			printf("Invalid Choice!\n");
		}
	}
}