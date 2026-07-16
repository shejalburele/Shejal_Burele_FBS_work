// Ass 2 without parameter and with return type
int age_cal();
int determine_triangle();
int divisible_cal();
int greater_cal();
int marks_cal();
int operation_op();
float price_cal();
#include<stdio.h>
void main()
{
    int r1=age_cal();
    if(r1==1)
		printf("child \n\n");
	else if(r1==2)
		printf("teenager \n\n");
	else if(r1==3)
		printf("adult\n\n");
	else
		printf("senior\n\n");
		
	int r2=determine_triangle();
	if(r2==1)
	    printf("the triangle is equilateral\n\n");
	else if(r2==2)
	    printf("the triangle is isoscalen\n\n");
	else
	    printf("the triangle is scalene\n\n");
	    
	int r3=divisible_cal();
	if(r3==1)
	    printf("number is divisible by both\n\n");
	else if(r3==2)
	    printf("number is divisible by 5 not 3\n\n");
	else if(r3==3)
	    printf("number is divisible by 3 not 5\n\n");
	else
	    printf("number is divisible by none\n\n");
	    
	int r4=greater_cal();
	if(r4==1)
	printf("a is greater \n\n");
	else if(r4==2)
	    printf("c is greater \n\n");
	else if(r4==3)
	    printf("b is greater \n\n");
	else
	    printf("c is greater \n\n");
	    
	int r5=marks_cal();
	if(r5==1)
	    printf("Distinction\n\n");
	else if(r5==2)
	    printf("First class\n\n");
	else if(r5==3)
	    printf("second class\n\n");
	else if(r5==4)
	    printf("pass class\n\n");
	else
	    printf("fail\n\n");
	    
	int r6=operation_op();
	if(r6==1)
	    printf("invalid operator \n\n");
	else
	    printf("result is:%d \n\n",r6);
	    
	float r7=price_cal();
	    printf("final price is:%f\n\n",r7);

}
int age_cal()
{
	int age =167;
	if(age<12)
	{
		return 1;
	}
	else if(age>=12 && age<=19)
	{
		return 2;
	}
	else if(age>=20 && age<=59)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}
int determine_triangle()
{
	int a=5,b=6,c=15;
	if(a==b && b==c)
	{
		return 1;
	}
	else if(a==b || b==c || a==c)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}
int divisible_cal()
{
	int a=2;
	if(a%3==0 && a%5==0)
	{
		return 1;
	}
	else if(a%5==0)
	{
		return 2;
	}
	else if(a%3==0)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}
int greater_cal()
{
	int a=20,b=10,c=31;
	if(a>b)
		if(a>c)
			return 1;
		else
			return 2;
	else if(b>a)
			if(b>c)
				return 3;
			else
				return 4;
}
int marks_cal()
{
	int marks=41;
	if(marks>75)
	{
		return 1;
	}
	else if(marks>65 && marks<=75)
	{
		return 2;
	}
	else if(marks>55 && marks<=65)
	{
		return 3;
	}
	else if(marks>=40 && marks<=55)
	{
		return 4;
	}
	else if(marks<40)
	{
		return 5;
	}
	
}
int operation_op()
{
	int a=50,b=20;
	char op='%';
	if(op == '+')
	{
	    return a+b;
    }
    else if(op == '-')
    {
	    return a-b;
	
	}
	else if(op == '*')
	{
		return a*b;
	}
	else if(op == '/')
	{
		return a/b;
	}
	else if(op == '%')
	{
		return a%b;
	}
	else
	{
		return 1;
	}
	
}
float price_cal()
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
		else
		    discount=0;
		
	fprice=price-discount;
	if(discount==0)
	    return fprice;
	else
	    return fprice;
}