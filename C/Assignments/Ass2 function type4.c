//Ass 2 que with parameter and with return type
int age_cal(int);
int determine_triangle(int,int,int);
int divisible_cal(int);
int greater_cal(int,int,int);
int marks_cal(int);
int operation_op(int,int,char);
float price_cal(float);
#include<stdio.h>
void main()
{
	int ag;
	printf("enter the age");
	scanf("%d",&ag);
	int r1=age_cal(ag);
	if(r1==1)
	    printf("child \n\n");
	else if(r1==2)
	    printf("teenager\n\n");
	else if(r1==3)
	    printf("adult\n\n");
	else
	    printf("senior\n\n");
	
	
	
	int side1,side2,side3;
	printf("enter the three sides of triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
	int r2=determine_triangle(side1,side2,side3);
	if(r2==1)
	    printf("the triangle is equilateral\n\n");
	else if(r2==2)
	    printf("the triangle is isoscalen\n\n");
	else
		printf("the triangle is scalene\n\n");
	
	int no;
	printf("enter the number");
	scanf("%d",&no);
    int r3=divisible_cal(no);
    if(r3==1)
        printf("number is divisible by both\n\n");
    else if(r3==2)
        printf("number is divisible by 5 not 3\n\n");
    else if(r3==3)
        printf("number is divisible by 3 not 5\n\n");
    else
        printf("number is divisible by none\n\n");
    
    
    int num1,num2,num3;
    printf("enter the three number");
    scanf("%d%d%d",&num1,&num2,&num3);
    int r4=greater_cal(num1,num2,num3);
    if(r4==1)
        printf("a is greater \n\n");
    else if(r4==2)
        printf("c is greater \n\n");
    else if(r4==3)
        printf("b is greater \n\n");
    else
        printf("c is greater \n\n");
    
    int m1;
    printf("enter the marks");
    scanf("%d",&m1);
    int r5=marks_cal(m1);
    if(r5==1)
        printf("Distinction\n\n");
    else if(r5==2)
        printf("first class\n\n");
    else if(r5==3)
        printf("second class\n\n");
    else if(r5==4)
        printf("pass class\n\n");
    else
        printf("fail\n\n");
    
    int a1,b1;
    printf("enter the two number");
    scanf("%d%d",&a1,&b1);
    char op1;
    printf("enter the operator");
    fflush(stdin);
    scanf("%c",&op1);
    int r6=operation_op(a1,b1,op1);
    if(r6==0)
    	printf("invalid operator\n");
    else
        printf("the result is:%d \n\n",r6);
    	
    float p1;
    printf("enter the price");
    scanf("%f",&p1);
    float r7=price_cal(p1);
    printf("the final price is:%f \n",r7);
}
int age_cal(int age)
{
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
int determine_triangle(int a,int b, int c)
{
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
int divisible_cal(int a)
{
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
int marks_cal(int marks)
{
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
int greater_cal(int a,int b, int c)
{
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
int operation_op(int a,int b,char op)
{
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
		return 0;
	}
	
}
float price_cal(float price)
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
	return fprice;
		
}