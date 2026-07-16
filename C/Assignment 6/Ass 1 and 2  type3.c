//Ass 1 and 2 program into with parameter and without return type (type3)
void even_cal(int);
void leap_year(int);
void palindrome(int);
void salary_cal(float);
void uppercase_cal(char);
void vote_cal(int);
void vowel_cal(char);
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
	int even1;
	printf("enter the number\n");
	scanf("%d",&even1);
	even_cal(even1);
	
	int leap1;
	printf("enter the year\n");
	scanf("%d",&leap1);
	leap_year(leap1);
	
	int pal;
	printf("enter the num\n");
	scanf("%d",&pal);
    palindrome(pal);
    
    float sal;
    printf("enter the basic salary\n");
    scanf("%f",&sal);
    salary_cal(sal);
    
    char upper;
    printf("enter the letter\n");
    scanf(" %c",&upper);
    uppercase_cal(upper);
    
    int ag;
    printf("enter the age of person\n");
    scanf("%d",&ag);
    vote_cal(ag);
    
    char vowel1;
    printf("enter the letter\n");
    scanf(" %c",&vowel1);
    vowel_cal(vowel1);
    
    ag;
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
void even_cal(int x)
{
	if(x%2==0)
	    printf("the number is even\n\n");
	    else
	    	printf("the number is odd \n\n");
} 
void leap_year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
	    printf("the year is leap year\n\n");
	    else
	        printf("the year is not leap year \n\n");
}
void palindrome(int num)
{
	int r1,r2,r3,a,reverse;
    r1=num%10;
	a=num/10;
	r2=a%10;
	r3=a/10;
	reverse=r1*100+r2*10+r3;
	if(reverse==num)
        printf("the number is palindrome\n\n");
        else
            printf("the number is not palindrome \n\n");
}
void salary_cal(float Basic)
{
	float da,ta,hra,Total_Salary;
	if(Basic<=5000)
	{
		da=10.0/100*Basic;
		ta=20.0/100*Basic;
		hra=25.0/100*Basic;
		Total_Salary=Basic+da+ta+hra;
		printf("the total salary is:%f\n\n",Total_Salary);
	}
	else
	{
		da=15.0/100*Basic;
		ta=25.0/100*Basic;
		hra=30.0/100*Basic;
		Total_Salary=Basic+da+ta+hra;
		printf("the total salary is:%f \n\n",Total_Salary);
	}
	  
}		
void uppercase_cal(char ch)
{
	if(ch>='A' && ch<='Z')
	    printf("the character is uppercase\n\n");
	    else
	        printf("the character is lowercase \n\n");
}	
void vote_cal(int age)
{
	if(age>=18)
	    printf("the person is eligible to vote\n\n");
	    else
	        printf("the person is not eligible to vote \n\n");
}
void vowel_cal(char ch)
{
	if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ||
	   ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U')
	    printf("the character is vowel\n\n");
	    else
	        printf("the character is consonant \n\n");
	  
}
void age_cal(int age)
{
	if(age<12)
	{
		printf("child \n\n");
	}
	else if(age>=12 && age<=19)
	{
		printf("teenager\n\n");
	}
	else if(age>=20 && age<=59)
	{
		printf("adult\n\n");
	}
	else
	{
		printf("senior\n\n");
	}
}
void determine_triangle(int a,int b, int c)
{
	if(a==b && b==c)
	{
		printf("the triangle is equilateral\n\n");
	}
	else if(a==b || b==c || a==c)
	{
		printf("the triangle is isoscalen\n\n");
	}
	else
	{
		printf("the triangle is scalene\n\n");
	}
}
void divisible_cal(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("number is divisible by both\n\n");
	}
	else if(a%5==0)
	{
		printf("number is divisible by 5 not 3\n\n");
	}
	else if(a%3==0)
	{
		printf("number is divisible by 3 not 5\n\n");
	}
	else
	{
		printf("number is divisible by none\n\n");
	}
}
void marks_cal(int marks)
{
	if(marks>75)
	{
		printf("Distinction\n\n");
	}
	else if(marks>65 && marks<=75)
	{
		printf("First class\n\n");
	}
	else if(marks>55 && marks<=65)
	{
		printf("second class\n\n");
	}
	else if(marks>=40 && marks<=55)
	{
		printf("pass class\n\n");
	}
	else if(marks<40)
	{
		printf("fail\n\n");
	}
	
}
void greater_cal(int a,int b, int c)
{
	if(a>b)
		if(a>c)
			printf("a=%d is greater \n\n",a);
		else
			printf("c=%d is greater \n\n",c);
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
	    printf("addition of %d and %d is:%d \n\n",a,b,a+b);
    }
    else if(op == '-')
    {
    	printf("substraction of %d and %d is:%d \n\n",a,b,a-b);
	}
	else if(op == '*')
	{
		printf("mul of %d and %d is:%d \n\n",a,b,a*b);
	}
	else if(op == '/')
	{
		printf("div of %d and %d is:%d \n\n",a,b,a/b);
	}
	else if(op == '%')
	{
		printf("mod of %d and %d is:%d\n\n",a,b,a%b);
	}
	else
	{
		printf("invalid operator\n\n");
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
	printf("the final price is:%f after the discount:%f \n\n",fprice,discount);
		
	
	
}
