//Ass 1 que without parameter without return type
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
	even_cal();
	leap_year();
    palindrome();
    salary_cal();
    uppercase_cal();
    vote_cal();
    vowel_cal();
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
