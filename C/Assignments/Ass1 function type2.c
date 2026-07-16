//Ass 1 with without parameter and with return type
int even();
int leap_year();
int palindrome();
float salary_cal();
char uppercase_cal();
int vote_cal();
char vowel();
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
