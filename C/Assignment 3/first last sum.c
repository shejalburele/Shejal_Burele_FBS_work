// sum of first and last digit
#include<stdio.h>
void main()
{
	int num,sum;
	int r1,r2;
	printf("enter the number \n");
	scanf("%d",&num);
	r1=num%10;
	while(num>10)
	{
		num=num/10;
	}
	r2=num;
	sum=r1+r2;
	printf("%d(%d+%d)",sum,r2,r1);
}