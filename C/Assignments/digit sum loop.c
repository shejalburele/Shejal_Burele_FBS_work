// sum of digit with loop and reverse 
#include<stdio.h>
void main()
{
	int no=2309,sum=0;
	int rem,rev=0;
	int original=no;
	int rev_original=no;
	while(no>0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("the sum of digit of number=%d is:%d \n",original,sum);
	
	while(original>0)
	{
		rem=original%10;
		rev=rev*10+rem;
		original=original/10;
	}
	printf("the reverse of number=%d is:%d",rev_original,rev);
	
	
}