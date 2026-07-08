//sum of first+last for loop
#include<stdio.h>
void main()
{
	int no=12345,r1,sum;
	r1=no%10;
	for( ;no>10;no=no/10)
	{
	}
	sum=r1+no;
	printf("%d(%d+%d)",sum,r1,no);
}