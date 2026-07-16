//Ass 3 que into type4
int sum_cal(int,int);
int armstrong_cal(int);
int factorial_cal(int);
int firstlast_sum(int);
int palindrome_cal(int);
int perfect_cal(int);
int prime_cal(int);
int strong_cal(int);
#include<stdio.h>
void main()
{	
	int s1,e1;
	printf("enter the two number");
	scanf("%d%d",&s1,&e1);
	int r1=sum_cal(s1,e1);
	printf("the sum of numbers in given range is:%d \n\n",r1);
	
	int no;
	printf("enter the number");
	scanf("%d",&no);
	int r2=armstrong_cal(no);
	if(r2==1)
	    printf("is armstrong \n\n");
	else
	    printf("is not armstrong \n\n");
	
	int fac1;
	printf("enter the number");
	scanf("%d",&fac1);
	int r3=factorial_cal(fac1);
	printf("the factorial of %d is:%d\n\n",fac1,r3);
	
	int first1;
	printf("enter the number");
	scanf("%d",&first1);
	int r4=firstlast_sum(first1);
	printf("sum is:%d \n\n",r4);
	
	int pal1;
	printf("enter the number");
	scanf("%d",&pal1);
	int r5=palindrome_cal(pal1);
	if(r5==1)
	    printf("the number is palindrome \n\n");
	else
	    printf("the number is not palindrome \n\n");
	
	
	int per1;
	printf("enter the number");
	scanf("%d",&per1);
    int r6=perfect_cal(per1);
    if(r6==1)
        printf("number is a perfect number\n\n");
    else
        printf("number is not a perfect number\n\n");
        
    int prime1;
    printf("enter the number");
    scanf("%d",&prime1);
    int r7=prime_cal(prime1);
    if(r7==1)
    printf("not prime\n\n");
    else
        printf("prime\n\n");
    
    int strong1;
    printf("enter the number");
    scanf("%d",&strong1);
    int r8=strong_cal(strong1);
    if(r8==1)
	    printf("strong number\n\n");	
	else
	    printf("not strong number\n\n");
}
int sum_cal(int start, int end)
{
	int sum=0;
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	
	return sum;
}
int armstrong_cal(int no)
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
	    return 1;
	else
	    return 0;
}
int factorial_cal(int num)
{
	int original_num=num;
	int factorial=1;
	while(num>=1)
	{
		factorial=factorial*num;
		num--;
	}
	return factorial;
}
int firstlast_sum(int num)
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
	return sum;
}
int palindrome_cal(int num)
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
	    return 1;
	else
	    return 0;
}  
int perfect_cal(int num)
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
	    return 1;
	else
	    return 0;
}
int prime_cal(int no)
{
	int i=2;
	while(i<no)
	{
		if(no%i==0)
		{
		    return 1;
	    }
	i++;
	}
	if(i==no)
	    return 0;
}
int strong_cal(int no)
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
        return 1;
    else
        return 0;
}
 