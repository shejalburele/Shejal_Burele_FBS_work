//Ass 1 and 2 program with type4 
int even_cal(int);
int leap_year(int);
int palindrome(int);
float salary_cal(float);
char uppercase_cal(char);
int vote_cal(int);
char vowel_cal(char);
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
	int even1;
	printf("enter the number\n");
	scanf("%d",&even1);
	int r1=even_cal(even1);
	if(r1==1)
	    printf("the number is even\n\n");
	else
	    printf("the number is odd \n\n");
	
	int leap1;
	printf("enter the year\n");
	scanf("%d",&leap1);
	int r2=leap_year(leap1);
	if(r2==1)
	    printf("the year is leap year\n\n");
	else
	    printf("the year is not leap year \n\n");
	
	int pal;
	printf("enter the num\n");
	scanf("%d",&pal);
    int r3=palindrome(pal);
    if(r3==1)
        printf("the number is palindrome\n\n");
    else
        printf("the number is not palindrome \n\n");
    
    
    float sal;
    printf("enter the basic salary\n");
    scanf("%f",&sal);
    float r4=salary_cal(sal);
    printf("the total salary is:%f\n\n",r4);
    
    char upper;
    printf("enter the letter\n");
    scanf(" %c",&upper);
    char r5=uppercase_cal(upper);
    if(r5==1)
        printf("the character is uppercase\n\n");
    else
	    printf("the character is lowercase \n\n");
    
    int ag;
    printf("enter the age of person\n");
    scanf("%d",&ag);
    int r6=vote_cal(ag);
    if(r6==1)
        printf("the person is eligible to vote\n\n");
    else
	    printf("the person is not eligible to vote \n\n");
    
    char vowel1;
    printf("enter the letter\n");
    scanf(" %c",&vowel1);
    char r7=vowel_cal(vowel1);
    if(r7==1)
        printf("the character is vowel\n\n");
    else
	printf("the character is consonant \n\n");
	
    ag;
	printf("enter the age");
	scanf("%d",&ag);
	int r8=age_cal(ag);
	if(r8==1)
	    printf("child \n\n");
	else if(r8==2)
	    printf("teenager\n\n");
	else if(r8==3)
	    printf("adult\n\n");
	else
	    printf("senior\n\n");
	
	
	
	int side1,side2,side3;
	printf("enter the three sides of triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
    int r9=determine_triangle(side1,side2,side3);
	if(r9==1)
	    printf("the triangle is equilateral\n\n");
	else if(r9==2)
	    printf("the triangle is isoscalen\n\n");
	else
		printf("the triangle is scalene\n\n");
	
	int no;
	printf("enter the number");
	scanf("%d",&no);
    int r_1=divisible_cal(no);
    if(r_1==1)
        printf("number is divisible by both\n\n");
    else if(r_1==2)
        printf("number is divisible by 5 not 3\n\n");
    else if(r_1==3)
        printf("number is divisible by 3 not 5\n\n");
    else
        printf("number is divisible by none\n\n");
    
    
    int num1,num2,num3;
    printf("enter the three number");
    scanf("%d%d%d",&num1,&num2,&num3);
    int r_2=greater_cal(num1,num2,num3);
    if(r_2==1)
        printf("a is greater \n\n");
    else if(r_2==2)
        printf("c is greater \n\n");
    else if(r_2==3)
        printf("b is greater \n\n");
    else
        printf("c is greater \n\n");
    
    int m1;
    printf("enter the marks");
    scanf("%d",&m1);
    int r_3=marks_cal(m1);
    if(r_3==1)
        printf("Distinction\n\n");
    else if(r_3==2)
        printf("first class\n\n");
    else if(r_3==3)
        printf("second class\n\n");
    else if(r_3==4)
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
    int r_4=operation_op(a1,b1,op1);
    if(r_4==1)
    	printf("invalid operator\n");
    else
        printf("the result is:%d \n\n",r_4);
    	
    float p1;
    printf("enter the price");
    scanf("%f",&p1);
    float r_5=price_cal(p1);
    printf("the final price is:%f \n",r_5);
}
int even_cal(int x)
{
	if(x%2==0)
	    return 1;
	else
	    return 0;
} 
int leap_year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
	    return 1;
	else
	    return 0;
}
int palindrome(int num)
{
	int r1,r2,r3,a,reverse;
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
float salary_cal(float Basic)
{
	float da,ta,hra,Total_Salary;
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
char uppercase_cal(char ch)
{
	if(ch>='A' && ch<='Z')
	    return 1;
	else
	    return 0;
}	
int vote_cal(int age)
{
	if(age>=18)
	    return 1;
	else
	    return 0;
}
char vowel_cal(char ch)
{
	if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ||
	   ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U')
	    return 1;
	else
	    return 0;
	  
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
		return 1;
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
