//Ass 1 que with parameter and with return type
int even_cal(int);
int leap_year(int);
int palindrome(int);
float salary_cal(float);
char uppercase_cal(char);
int vote_cal(int);
char vowel_cal(char);
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
