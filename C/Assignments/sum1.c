#include<stdio.h>
void main()
{
	int num=73526,r1,sum=0;
	r1=num%10;
	sum=sum+r1;
	num=num/10;
	
	r1=num%10;
	sum=sum+r1;
	num=num/10;
	
	r1=num%10;
	sum=sum+r1;
	num=num/10;
	
	r1=num%10;
	sum=sum+r1;
	num=num/10;
	
	r1=num%10;
	sum=sum+r1;
	num=num/10;
	
	printf("the sum of digit is:%d",sum);
}