//Ass 1 and Ass 2 program into w/o parameter w/o returntype (type1)
void age_cal();
void determine_triangle();
void divisible_cal();
void greater_cal();
void marks_cal();
void operation_op();
void price_cal();
void even_cal();
void leap_year();
void palindrome();
void salary_cal();
void uppercase_cal();
void vote_cal();
void vowel_cal();

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
    even_cal();
	leap_year();
    palindrome();
    salary_cal();
    uppercase_cal();
    vote_cal();
    vowel_cal();
}
void age_cal()
{
	int age =167;
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
void determine_triangle()
{
	int a=5,b=6,c=15;
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
void divisible_cal()
{
	int a=2;
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
void marks_cal()
{
	int marks=41;
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
void greater_cal()
{
	int a=20,b=10,c=31;
	if(a>b)
		if(a>c)
			printf("a=%d is greater \n\n",a);
		else
			printf("c=%d is greater \n\n",c);
	else if(b>a)
			if(b>c)
				printf("b=%d is greater \n\n",b);
			else
				printf("c=%d is greater \n\n",c);
}
void operation_op()
{
	int a=50,b=20;
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
	printf("the final price is:%f after the discount:%f \n\n",fprice,discount);
		
	
	
}
void even_cal()
{
	int x=2;
	if(x%2==0)
	    printf("the number is even\n\n");
	    else
	    	printf("the number is odd \n\n");
} 
void leap_year()
{
	int year=1900;
	if(year%4==0 && year%100!=0 || year%400==0)
	    printf("the year is leap year\n\n");
	    else
	        printf("the year is not leap year \n\n");
}
void palindrome()
{
	int num=124,r1,r2,r3,a,reverse;
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
void salary_cal()
{
	float Basic=6000,da,ta,hra,Total_Salary;
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
void uppercase_cal()
{
	char ch='s';
	if(ch>='A' && ch<='Z')
	    printf("the character is uppercase\n\n");
	    else
	        printf("the character is lowercase \n\n");
}	
void vote_cal()
{
	int age = 135;
	if(age>=18)
	    printf("the person is eligible to vote\n\n");
	    else
	        printf("the person is not eligible to vote \n\n");
}
void vowel_cal()
{
	char ch='A';
	if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ||
	   ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U')
	    printf("the character is vowel\n\n");
	    else
	        printf("the character is consonant \n\n");
	  
}

