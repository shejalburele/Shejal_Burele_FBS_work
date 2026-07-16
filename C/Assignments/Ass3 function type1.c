//Ass 3 que without parameter and without return type
void number_cal();
void table_5();
void sum_cal();
void armstrong_cal();
void factorial_cal();
void firstlast_sum();
void palindrome_cal();
void perfect_cal();
void prime_cal();
void strong_cal();
#include<stdio.h>
void main()
{
    number_cal();
	table_5();
	sum_cal();
	armstrong_cal();
	factorial_cal();
	firstlast_sum();
	palindrome_cal();
    perfect_cal();
    prime_cal();
    strong_cal();	
}
void number_cal()
{
	int a=1;
	while(a<=10)
	{
		printf("%d ",a);
		a++;
	}
	printf("\n\n");
}
void table_5()
{
	int no=5;
	while(no<=50)
	{
		if(no%5==0)
		    printf("%d ",no);
	no++;
    }
    printf("\n\n");
}
void sum_cal()
{
	int start=1,end=5,sum=0;
	while(start>=1 && start<=5)
	{
		sum=sum+start;
		start++;
	}
	
	printf("the sum of numbers in given range is:%d \n\n",sum);
}
void armstrong_cal()
{
	int no=1634;
	int rem,sum=0;
	int ori_no=no;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	no=ori_no;

	while(no>0)
	{
		rem=no%10;
		
		int i=1;
	    int res=1;
	    while(i<=count)
	    {
		    res=res*rem;
	    i++;
	    }
		sum=sum+res;
		no=no/10;
	}
	if(sum==ori_no)
	    printf("is armstrong \n\n");
	else
	    printf("not armstrong\n\n");
}
void factorial_cal()
{
	int num=6;
	int original_num=num;
	int factorial=1;
	while(num>=1)
	{
		factorial=factorial*num;
		num--;
	}
	printf("the factorial of %d is:%d\n\n",original_num,factorial);
}
void firstlast_sum()
{
	int num,sum;
	int r1,r2;
	printf("enter the number \n");
	scanf("%d",&num);
	r1=num%10;
	while(num>10)
	{
		num=num/10;
	}
	r2=num;
	sum=r1+r2;
	printf("%d(%d+%d) \n\n",sum,r2,r1);
}
void palindrome_cal()
{
	int num=121,original_num=num;
	int rev=0;
	int rem;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==original_num)
	    printf("the %d is palindrome \n\n",original_num);
	else
	    printf("the %d is not palindrome\n\n",original_num);
}  
void perfect_cal()
{
	int num=496;
	int i=1;
	int sum=0;
	int original_num=num;
	while(i<num)
	{
		if(num%i==0)
	        sum=sum+i;
	i++;
	}
	if(sum==original_num)
	    printf("%d is a perfect number\n\n",original_num);
	else
	    printf("%d is not a perfect number\n\n",original_num);
}
void prime_cal()
{
	int no=19;
	int i=2;
	while(i<no)
	{
		if(no%i==0)
		{
		    printf("not prime\n\n");
		    break;
	    }
	i++;
	}
	if(i==no)
	    printf("prime\n\n");
}
void strong_cal()
{
	int no=40585,ori_no=no,i=1;
	int rem,sum=0;
	while(no>0)
	{
    rem=no%10;
    int fac=1;
	while(rem>=i)
	{
		fac=fac*rem;
	rem--;
	}
	sum=sum+fac;
	no=no/10;
    }
    if(sum==ori_no)
        printf("strong number\n\n");
    else
        printf("not strong number\n\n");
}
 