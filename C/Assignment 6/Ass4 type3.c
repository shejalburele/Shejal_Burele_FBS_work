// Ass 4 que into type3
void armstrong_cal(int);
void perfect_cal(int);
void prime_cal(int);
void strong_cal(int);
void menu_driven(int,int);
#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
    armstrong_cal(num);
    
    num;
    printf("enter the number");
	scanf("%d",&num);
	perfect_cal(num);
	
	
	num;
	printf("enter the number");
	scanf("%d",&num);
	prime_cal(num);
	
	num;
	printf("enter the number");
	scanf("%d",&num);
	strong_cal(num);
	
	int num1,choice1;
	printf("enter the number \n");
	scanf("%d",&num1);
	printf("press the choice to perform operations \n");
	printf("1.To check number is even or odd. \n");
	printf("2.To check number is prime or not.\n");
	printf("3.To check number is pallindrome or not. \n");
	printf("4.To check number is positive, negative or zero.\n");
	printf("5.To reverse a number. \n");
	printf("6.To find sum of digits. \n");
	scanf("%d",&choice1);
	menu_driven(num1,choice1);	
}
void armstrong_cal(int no)
{
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
void perfect_cal(int no)
{
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
void prime_cal(int no)
{
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
void strong_cal(int no)
{
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
void menu_driven(int num,int choice)
{
	if(choice==1)
	{
		if(num%2==0)
		    printf("%d is even\n\n",num);
		else
		    printf("%d is odd\n\n",num);
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
		    printf("%d is prime number\n\n",num);
		else
		    printf("%d is not prime number\n\n",num);
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
		    printf("%d is pallindrome\n\n",num);
		else
		    printf("%d is not palindrome\n\n",num);
	}
	
	else if(choice==4)
	{
		if(num==0)
		    printf("number is zero\n\n");
		else if(num>0)
		    printf("number is positive\n\n");
		else if(num<0)
		    printf("number is negative\n\n");
		else
		    printf("invalid number\n\n");
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
		printf("the reverse of %d is:%d\n\n",num,rev);
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
		printf("the sum of digits is %d\n\n",sum);
	}
	else
	    printf("invalid choice\n\n");
}