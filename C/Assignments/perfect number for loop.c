//perfect number in for
#include<stdio.h>
void main()
{
	int no=12,sum=0;
	for(int i=1;i<no;i++)
	{
		if(no%i==0)
		    sum=sum+i;
	}
	if(sum==no)
	    printf("perfect number");
	else
	    printf("not perfect");
}