#include<stdio.h>
void main()
{
	int age=25;
	char gender='f';
	if(age>=21 && gender=='m')
	{
		printf("eligible for marriage");
	}
	else if(age<21 && gender=='m')
	{
		printf("not eligible for marriage");
	}
	else if(age>=18 && gender=='f')
	{
		printf("eligible for marriage");
	}
	else
	{
		printf("not eligible");
	}
}