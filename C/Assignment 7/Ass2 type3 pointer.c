void age_cal(int*);
void determine_triangle(int*,int*,int*);
void divisible_cal(int*);
void greater_cal(int*,int*,int*);
void marks_cal(int*);
void operation_op(int*,int*,char*);
void price_cal(float*);
#include<stdio.h>
void main()
{
	int ag;
	printf("enter the age");
	scanf("%d",&ag);
	age_cal(&ag);
	
	int side1,side2,side3;
	printf("enter the three sides of triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
	determine_triangle(&side1,&side2,&side3);
	
	int no;
	printf("enter the number");
	scanf("%d",&no);
    divisible_cal(&no);
    
    int num1,num2,num3;
    printf("enter the three number");
    scanf("%d%d%d",&num1,&num2,&num3);
    greater_cal(&num1,&num2,&num3);
    
    int m1;
    printf("enter the marks");
    scanf("%d",&m1);
    marks_cal(&m1);
    
    int a1,b1;
    printf("enter the two number");
    scanf("%d%d",&a1,&b1);
    char ch;
    printf("enter the operator");
    fflush(stdin);
    scanf("%c",&ch);
    operation_op(&a1,&b1,&ch);
    
    float p1;
    printf("enter the price");
    scanf("%f",&p1);
    price_cal(&p1);
}
void age_cal(int* age)
{
	if(*age<12)
	{
		printf("child \n\n");
	}
	else if(*age>=12 && *age<=19)
	{
		printf("teenager\n\n");
	}
	else if(*age>=20 && *age<=59)
	{
		printf("adult\n\n");
	}
	else
	{
		printf("senior\n\n");
	}
}
void determine_triangle(int* a,int* b, int* c)
{
	if(*a==*b && *b==*c)
	{
		printf("the triangle is equilateral\n\n");
	}
	else if(*a==*b || *b==*c || *a==*c)
	{
		printf("the triangle is isoscalen\n\n");
	}
	else
	{
		printf("the triangle is scalene\n\n");
	}
}
void divisible_cal(int* a)
{
	if(*a%3==0 && *a%5==0)
	{
		printf("number is divisible by both\n\n");
	}
	else if(*a%5==0)
	{
		printf("number is divisible by 5 not 3\n\n");
	}
	else if(*a%3==0)
	{
		printf("number is divisible by 3 not 5\n\n");
	}
	else
	{
		printf("number is divisible by none\n\n");
	}
}
void marks_cal(int* marks)
{
	if(*marks>75)
	{
		printf("Distinction\n\n");
	}
	else if(*marks>65 && *marks<=75)
	{
		printf("First class\n\n");
	}
	else if(*marks>55 && *marks<=65)
	{
		printf("second class\n\n");
	}
	else if(*marks>=40 && *marks<=55)
	{
		printf("pass class\n\n");
	}
	else if(*marks<40)
	{
		printf("fail\n\n");
	}
	
}
void greater_cal(int* a,int* b, int* c)
{
	if(*a > *b)
		if(*a > *c)
			printf("a=%d is greater \n\n",*a);
		else
			printf("c=%d is greater \n\n",*c);
	else if(*b > *a)
			if(*b > *c)
				printf("b=%d is greater \n\n",*b);
			else
				printf("c=%d is greater \n\n",*c);
}
void operation_op(int* a,int* b,char* ch)
{
	if(*ch == '+')
	{
	    printf("addition of %d and %d is:%d \n\n",*a,*b,*a + *b);
    }
    else if(*ch == '-')
    {
    	printf("substraction of %d and %d is:%d \n\n",*a,*b,*a - *b);
	}
	else if(*ch == '*')
	{
		printf("mul of %d and %d is:%d \n\n",*a,*b,*a * *b);
	}
	else if(*ch == '/')
	{
		printf("div of %d and %d is:%d \n\n",*a,*b,*a / *b);
	}
	else if(*ch == '%')
	{
		printf("mod of %d and %d is:%d\n\n",*a,*b,*a % *b);
	}
	else
	{
		printf("invalid operator\n\n");
	}
	
}
void price_cal(float* price)
{
	char isStudent='n';
	float discount;
	float fprice;
	if(isStudent=='y')
	{
		if(*price>500)
		{
			discount=0.20 * *price;
			
		}
		else
		{
			discount=0.10 * *price;
		
		}
	}
	else if(*price>600)
		{
			discount=0.15 * *price;
			
		}
		else
		{
			discount=0;
		}
		
	fprice=*price-discount;
	if(discount==0)
		printf("final price is %f",fprice);
	else
		printf("the final price is:%f after the discount:%f \n",fprice,discount);
}