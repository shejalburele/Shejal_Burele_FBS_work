// enter marks based on that enter result
#include<stdio.h>
void main()
{
	int marks=41;
	if(marks>75)
	{
		printf("Distinction");
	}
	else if(marks>65 && marks<=75)
	{
		printf("First class");
	}
	else if(marks>55 && marks<=65)
	{
		printf("second class");
	}
	else if(marks>=40 && marks<=55)
	{
		printf("pass class");
	}
	else if(marks<40)
	{
		printf("fail");
	}
	
}