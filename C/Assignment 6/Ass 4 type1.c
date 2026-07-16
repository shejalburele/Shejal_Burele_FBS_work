// Ass 4 program into w/o parameter and w/o return type
void armstrong_cal();
void perfect_cal();
void prime_cal();
void strong_cal();
void menu_driven();
#include<stdio.h>
void main()
{
    armstrong_cal();
	perfect_cal();
	prime_cal();
	strong_cal();
	menu_driven();	
}
void armstrong_cal()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		int j=i;
		int count=0;
		while(j>0)
		{
			count++;
			j=j/10;
		}
	    j=i;
	    int rem,sum=0;
	    while(j>0)
	    {
	    	rem=j%10;
	    	int res=1;
	    	for(int a=1;a<=count;a++)
	    	{
	    		res=res*rem;
			}
			sum=sum+res;
			j=j/10;
		}
		
		if(sum==i)
		    printf("%d ",i);
	}
	printf(" \n\n");
}
void perfect_cal()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		int sum=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			    sum=sum+j;
		}
		if(sum==i)
		    printf("%d ",i);
	
	}
	printf(" \n\n");
}
void prime_cal()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	if(no==1 || no==0)
	    printf("%d is not prime",no);
	else
	{
		for(int start=2;start<=no;start++)
		{
			int prime=0;
			for(int i=2;i<start;i++)
			{
				if(start%i==0)
				    prime=1;
			}
			if(prime==0)
			    printf("%d ",start);
		}
	}
	printf(" \n\n");
}
void strong_cal()
{
	int no;
	printf("enter the number");
	scanf("%d",&no);
	for(int start=1;start<=no;start++)
	{
		int tem=start;
		int rem,sum=0;
		while(tem>0)
		{
			rem=tem%10;
			int fac=1;
			for(int i=1;i<=rem;i++)
			{
				fac=fac*i;
			}
			sum=sum+fac;
			tem=tem/10;
		}
		if(sum==start)
		    printf("%d ",start);
	}
	printf(" \n\n");
}
void menu_driven()
{
	int num,choice;
	printf("enter the number \n");
	scanf("%d",&num);
	printf("press the choice to perform operations \n");
	printf("1.To check number is even or odd. \n");
	printf("2.To check number is prime or not.\n");
	printf("3.To check number is pallindrome or not. \n");
	printf("4.To check number is positive, negative or zero.\n");
	printf("5.To reverse a number. \n");
	printf("6.To find sum of digits. \n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		if(num%2==0)
		    printf("%d is even",num);
		else
		    printf("%d is odd",num);
	}
	
	else if(choice==2)
	{
		int prime=0;
		for(int i=2;i<num;i++)
		{
			if(num%i==0)
			    prime=1;
		}
		if(prime==0)
		    printf("%d is prime number",num);
		else
		    printf("%d is not prime number",num);
	}
	
	else if(choice==3)
	{
		int tem=num;
		int rem,rev=0;
		while(tem>0)
		{
			rem=tem%10;
			rev=rev*10+rem;
			tem=tem/10;
		}
		if(rev==num)
		    printf("%d is pallindrome",num);
		else
		    printf("%d is not palindrome",num);
	}
	
	else if(choice==4)
	{
		if(num==0)
		    printf("number is zero");
		else if(num>0)
		    printf("number is positive");
		else if(num<0)
		    printf("number is negative");
		else
		    printf("invalid number");
	}
	
	else if(choice==5)
	{
		int tem=num;
		int rev=0,rem;
		while(tem>0)
		{
			rem=tem%10;
			rev=rev*10+rem;
			tem=tem/10;
		}
		printf("the reverse of %d is:%d",num,rev);
	}
	
	else if(choice==6)
	{
		int tem=num;
		int rem,sum=0;
		while(tem>0)
		{
			rem=tem%10;
			sum=sum+rem;
			tem=tem/10;
		}
		printf("the sum of digits is %d",sum);
	}
	else
	    printf("invalid choice");
}