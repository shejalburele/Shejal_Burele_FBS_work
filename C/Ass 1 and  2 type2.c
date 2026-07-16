//Ass 1 and 2 program w/o parameter and with return type (type2) 
int even();
int leap_year();
int palindrome();
float salary_cal();
char uppercase_cal();
int vote_cal();
char vowel();
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
	int r1=even();
	if(r1==1)
	    printf("the number is even\n\n");
	else
	    printf("the number is odd\n\n");
	    
	int r2=leap_year();
	if(r2==1)
	    printf("the year is leap year\n\n");
	else
	    printf("the year is not leap year\n\n");
	    
	int r3=palindrome();
	if(r3==1)
	    printf("the number is palindrome\n\n");
	else
	    printf("the number is not palindrome\n\n");
	    
	float r4=salary_cal();
	printf("the total salary is:%f\n\n",r4);
	
	char r5=uppercase_cal();
	if(r5==1)
	    printf("the character is uppercase\n\n");
    else
        printf("the character is lowercase\n\n");
        
    int r6=vote_cal();
    if(r6==1)
        printf("the person is eligible to vote\n\n");
    else 
        printf("the person is not eligible to vote\n\n");
        
    char r7=vowel();
    if(r7==1)
        printf("the character is vowel\n\n");
    else
        printf("the character is consonant\n\n");
        
    int a1=age_cal();
    if(a1==1)
		printf("child \n\n");
	else if(a1==2)
		printf("teenager \n\n");
	else if(a1==3)
		printf("adult\n\n");
	else
		printf("senior\n\n");
		
	int a2=determine_triangle();
	if(a2==1)
	    printf("the triangle is equilateral\n\n");
	else if(a2==2)
	    printf("the triangle is isoscalen\n\n");
	else
	    printf("the triangle is scalene\n\n");
	    
	int a3=divisible_cal();
	if(a3==1)
	    printf("number is divisible by both\n\n");
	else if(a3==2)
	    printf("number is divisible by 5 not 3\n\n");
	else if(a3==3)
	    printf("number is divisible by 3 not 5\n\n");
	else
	    printf("number is divisible by none\n\n");
	    
	int a4=greater_cal();
	if(a4==1)
	printf("a is greater \n\n");
	else if(a4==2)
	    printf("c is greater \n\n");
	else if(a4==3)
	    printf("b is greater \n\n");
	else
	    printf("c is greater \n\n");
	    
	int a5=marks_cal();
	if(a5==1)
	    printf("Distinction\n\n");
	else if(a5==2)
	    printf("First class\n\n");
	else if(a5==3)
	    printf("second class\n\n");
	else if(a5==4)
	    printf("pass class\n\n");
	else
	    printf("fail\n\n");
	    
	int a6=operation_op();
	if(a6==1)
	    printf("invalid operator \n\n");
	else
	    printf("result is:%d \n\n",a6);
	    
	float a7=price_cal();
	    printf("final price is:%f\n\n",a7);

}
int even()
{
	int x=2;
	if(x%2==0)
	    return 1;
	else
	    return 0;
}
int leap_year()
{
	int year=1900;
	if(year%4==0 && year%100!=0 || year%400==0)
	    return 1;
	else
	    return 0;
}
int palindrome()
{
	int num=124,r1,r2,r3,a,reverse;
    r1=num%10;
	a=num/10;
	r2=a%10;
	r3=a/10;
	reverse=r1*100+r2*10+r3;
	if(reverse==num)
        return 1;
    else
        return 0;
}
float salary_cal()
{
	float Basic=6000,da,ta,hra,Total_Salary;
	if(Basic<=5000)
	{
		da=10.0/100*Basic;
		ta=20.0/100*Basic;
		hra=25.0/100*Basic;
		Total_Salary=Basic+da+ta+hra;
		return Total_Salary;
	}
	else
	{
		da=15.0/100*Basic;
		ta=25.0/100*Basic;
		hra=30.0/100*Basic;
		Total_Salary=Basic+da+ta+hra;
		return Total_Salary;
	}
	  
}
char uppercase_cal()
{
	char ch='s';
	if(ch>='A' && ch<='Z')
	    return 1;
	else
	    return 0;
}
int vote_cal()
{
	int age = 135;
	if(age>=18)
	    return 1;
	else
	    return 0;
}
char vowel()
{
	char ch='A';
	if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ||
	   ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U')
	    return 1;
	else
	    return 0;
	  
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