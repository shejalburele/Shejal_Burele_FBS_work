// palindrome
#include<stdio.h>
void main()
{
	int num=121,original_num=num;
	int rev=0;
	int rem;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==original_num)
	    printf("the %d is palindrome",original_num);
	else
	    printf("the %d is not palindrome",original_num);
}  