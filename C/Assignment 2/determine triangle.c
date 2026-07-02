// accept 3 sides of a triangle and determine it is equi. , isosca. , scal.
#include<stdio.h>
void main()
{
	int a=5,b=6,c=15;
	if(a==b && b==c)
	{
		printf("the triangle is equilateral");
	}
	else if(a==b || b==c || a==c)
	{
		printf("the triangle is isoscalen");
	}
	else
	{
		printf("the triangle is scalene");
	}
}