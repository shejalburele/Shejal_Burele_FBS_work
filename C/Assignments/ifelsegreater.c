#include<stdio.h>
void main()
{
	int a=10,b=1,c=5;
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");
		}
		else
		{
			printf("c is greater");
		}
    }
	else
	{
		if(b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
}