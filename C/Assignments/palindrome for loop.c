//palindrome in for loop
#include<stdio.h>
void main()
{
	int no=155,ori_no=no,rem,rev=0;
	for( ;no>0;no=no/10)
	{
		rem=no%10;
		rev=rev*10+rem;
	}
	if(rev==ori_no)
	    printf("palindrome number");
	else
	    printf("not palindrome number");
}