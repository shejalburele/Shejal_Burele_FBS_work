// divisible by 3 ,5, both
#include<stdio.h>
void main()
{
	int a=2;
	if(a%3==0 && a%5==0)
	{
		printf("number is divisible by both");
	}
	else if(a%5==0)
	{
		printf("number is divisible by 5 not 3");
	}
	else if(a%3==0)
	{
		printf("number is divisible by 3 not 5");
	}
	else
	{
		printf("number is divisible by none");
	}
}