// Ass 2 que into with parameter and without return type
void age_cal(int);
void determine_triangle(int,int,int);
void divisible_cal(int);
void greater_cal(int,int,int);
void marks_cal(int);
void operation_op(int,int);
void price_cal(float);
#include<stdio.h>
void main()
{
	int ag;
	printf("enter the age");
	scanf("%d",&ag);
	age_cal(ag);
	
	int side1,side2,side3;
	printf("enter the three sides of triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
	determine_triangle(side1,side2,side3);
	
	int no;
	printf("enter the number");
	scanf("%d",&no);
    divisible_cal(no);
    
    int num1,num2,num3;
    printf("enter the three number");
    scanf("%d%d%d",&num1,&num2,&num3);
    greater_cal(num1,num2,num3);
    
    int m1;
    printf("enter the marks");
    scanf("%d",&m1);
    marks_cal(m1);
    
    int a1,b1;
    printf("enter the two number");
    scanf("%d%d",&a1,&b1);
    operation_op(a1,b1);
    
    float p1;
    printf("enter the price");
    scanf("%f",&p1);
    price_cal(p1);
}
void age_cal(int age)
{
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
void determine_triangle(int a,int b, int c)
{
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
void divisible_cal(int a)
{
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
void marks_cal(int marks)
{
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
void greater_cal(int a,int b, int c)
{
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
void operation_op(int a,int b)
{
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
void price_cal(float price)
{
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