// prime number in for
#include<stdio.h>
void main()
{
	int no=99;
	int i;
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
		    printf("not prime");
		    break;
		}
	}
	if(no==i)
	    printf("prime");
}