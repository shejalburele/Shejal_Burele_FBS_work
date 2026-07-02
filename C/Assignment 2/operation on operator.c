// take two input hardcoded input and operators and perform operation based on operator
#include<stdio.h>
void main()
{
	int a=50,b=20;
	char op='%';
	if(op == '+')
	{
	    printf("addition of %d and %d is:%d \n",a,b,a+b);
    }
    else if(op == '-')
    {
    	printf("substraction of %d and %d is:%d \n",a,b,a-b);
	}
	else if(op == '*')
	{
		printf("mul of %d and %d is:%d \n",a,b,a*b);
	}
	else if(op == '/')
	{
		printf("div of %d and %d is:%d \n",a,b,a/b);
	}
	else if(op == '%')
	{
		printf("mod of %d and %d is:%d",a,b,a%b);
	}
	else
	{
		printf("invalid operator");
	}
	
}