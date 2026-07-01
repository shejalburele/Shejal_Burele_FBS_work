#include<stdio.h>
void main()
{
	int a=15,b=17,c;
	printf("Before Swap:a=%d and b=%d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swap:a=%d abd b=%d",a,b);
}