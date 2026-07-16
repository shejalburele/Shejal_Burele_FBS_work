//Ass 1 que into with parameter and without return type
void even_cal(int);
void leap_year(int);
void palindrome(int);
void salary_cal(float);
void uppercase_cal(char);
void vote_cal(int);
void vowel_cal(char);
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
