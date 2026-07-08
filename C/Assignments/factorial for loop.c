// factorial in for loop
#include<stdio.h>
void main()
{
	int no=5,sum=1;
	for(int i=1;i<=no;i++)
	{
		sum=sum*i;
	}
	    printf("factorial of %d is:%d",no,sum);
}