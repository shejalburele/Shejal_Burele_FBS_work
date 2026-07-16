//Ass 3 que with type3
void number_cal(int);
void table_5(int);
void sum_cal(int,int);
void armstrong_cal(int);
void factorial_cal(int);
void firstlast_sum(int);
void palindrome_cal(int);
void perfect_cal(int);
void prime_cal(int);
void strong_cal(int);
#include<stdio.h>
void main()
{
	int a1;
	printf("enter the number");
	scanf("%d ",&a1);
    number_cal(a1);
    
    int no1;
    printf("enter the number");
    scanf("%d",&no1);
	table_5(no1);
	
	int s1,e1;
	printf("enter the two number");
	scanf("%d%d",&s1,&e1);
	sum_cal(s1,e1);
	
	int no;
	printf("enter the number");
	scanf("%d",&no);
	armstrong_cal(no);
	
	int fac1;
	printf("enter the number");
	scanf("%d",&fac1);
	factorial_cal(fac1);
	
	int first1;
	printf("enter the number");
	scanf("%d",&first1);
	firstlast_sum(first1);
	
	int pal1;
	printf("enter the number");
	scanf("%d",&pal1);
	palindrome_cal(pal1);
	
	int per1;
	printf("enter the number");
	scanf("%d",&per1);
    perfect_cal(per1);
    
    int prime1;
    printf("enter the number");
    scanf("%d",&prime1);
    prime_cal(prime1);
    
    int strong1;
    printf("enter the number");
    scanf("%d",&strong1);
    strong_cal(strong1);	
}
void number_cal(int a)
{
	for(int i=1;i<=a;i++)
	{
		printf("%d",i);
	}
	printf("\n\n");
}
void table_5(int no)
{
	int i=1;
	while(i<=10)
	{
		printf("%d  x %d = %d\n",no,i,no*i);
	i++;
    }
    printf("\n\n");
}
void sum_cal(int start, int end)
{
	int sum=0;
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	
	printf("the sum of numbers in given range is:%d \n\n",sum);
}
void armstrong_cal(int no)
{
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
void factorial_cal(int num)
{
	int original_num=num;
	int factorial=1;
	while(num>=1)
	{
		factorial=factorial*num;
		num--;
	}
	printf("the factorial of %d is:%d\n\n",original_num,factorial);
}
void firstlast_sum(int num)
{
	int sum;
	int r1,r2;
	r1=num%10;
	while(num>10)
	{
		num=num/10;
	}
	r2=num;
	sum=r1+r2;
	printf("%d(%d+%d) \n\n",sum,r2,r1);
}
void palindrome_cal(int num)
{
	int original_num=num;
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
void perfect_cal(int num)
{
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
void prime_cal(int no)
{
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
void strong_cal(int no)
{
	int ori_no=no,i=1;
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
 