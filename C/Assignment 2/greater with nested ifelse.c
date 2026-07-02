// greatest of three program with nested if-else
#include<stdio.h>
void main()
{
	int a=20,b=10,c=31;
	if(a>b)
		if(a>c)
			printf("a=%d is greater \n",a);
		else
			printf("c=%d is greater \n",c);
	else if(b>a)
			if(b>c)
				printf("b=%d is greater \n",b);
			else
				printf("c=%d is greater \n",c);
}