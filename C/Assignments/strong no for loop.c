//strong number
#include<stdio.h>
void main()
{
	int no=123,ori_no=no,rem,sum=0;
	for( ;no>0;no=no/10)
	{
		rem=no%10;
		int fac=1;
		for(int i=1;i<=rem;i++)
		{
			fac=fac*i;
		}
		sum=sum+fac;	
	}
	if(sum==ori_no)
	    printf("strong number");
	else
	    printf("not strong number");
}