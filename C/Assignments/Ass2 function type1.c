//Ass 2 que without parameter without return type
void age_cal();
void determine_triangle();
void divisible_cal();
void greater_cal();
void marks_cal();
void operation_op();
void price_cal();
#include<stdio.h>
void main()
{
	age_cal();
	determine_triangle();
    divisible_cal();
    greater_cal();
    marks_cal();
    operation_op();
    price_cal();
}
void age_cal()
{
	int age =167;
	if(age<12)
	{
		printf("child \n");
	}
	else if(age>=12 && age<=19)
	{
		printf("teenager\n");
	}
	else if(age>=20 && age<=59)
	{
		printf("adult\n");
	}
	else
	{
		printf("senior\n");
	}
}
void determine_triangle()
{
	int a=5,b=6,c=15;
	if(a==b && b==c)
	{
		printf("the triangle is equilateral\n");
	}
	else if(a==b || b==c || a==c)
	{
		printf("the triangle is isoscalen\n");
	}
	else
	{
		printf("the triangle is scalene\n");
	}
}
void divisible_cal()
{
	int a=2;
	if(a%3==0 && a%5==0)
	{
		printf("number is divisible by both\n");
	}
	else if(a%5==0)
	{
		printf("number is divisible by 5 not 3\n");
	}
	else if(a%3==0)
	{
		printf("number is divisible by 3 not 5\n");
	}
	else
	{
		printf("number is divisible by none\n");
	}
}
void marks_cal()
{
	int marks=41;
	if(marks>75)
	{
		printf("Distinction\n");
	}
	else if(marks>65 && marks<=75)
	{
		printf("First class\n");
	}
	else if(marks>55 && marks<=65)
	{
		printf("second class\n");
	}
	else if(marks>=40 && marks<=55)
	{
		printf("pass class\n");
	}
	else if(marks<40)
	{
		printf("fail\n");
	}
	
}
void greater_cal()
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
void operation_op()
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
		printf("mod of %d and %d is:%d\n",a,b,a%b);
	}
	else
	{
		printf("invalid operator\n");
	}
	
}
void price_cal()
{
	float price=100;
	char isStudent='n';
	float discount;
	float fprice;
	if(isStudent=='y')
	{
		if(price>500)
		{
			discount=0.20*price;
			
		}
		else
		{
			discount=0.10*price;
		
		}
	}
	else if(price>600)
		{
			discount=0.15*price;
			
		}
		
	fprice=price-discount;
	printf("the final price is:%f after the discount:%f \n",fprice,discount);
		
	
	
}