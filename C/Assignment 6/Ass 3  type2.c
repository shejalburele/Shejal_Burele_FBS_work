//Ass 3 profram into w/o parameter and with return type (type2) 
int sum_cal();
int armstrong_cal();
int factorial_cal();
int firstlast_cal();
int palindrome();
int perfect_cal();
int prime_cal();
int strong_cal();
#include<stdio.h>
void main()
{
    int r1=sum_cal();
    printf("the sum of numbers in given range is:%d \n\n",r1);
    
    int r2=armstrong_cal();
    if(r2==1)
        printf("is armstrong\n\n");
    else
		printf("not armstrong\n\n");
		
	int r3=factorial_cal();
	printf("factorial is:%d\n\n",r3);
	
	int r4=firstlast_cal();
	printf("the sum is:%d\n\n",r4);
	
	int r5=palindrome();
	if(r5==1)
	    printf("is palindrome\n\n");
	else	
		printf("is not palindrome\n\n");
		
	int r6=perfect_cal();
	if(r6==1)
	    printf("is a perfect number\n\n");
	else
	    printf("is not a perfect number\n\n");
	    
	int r7=prime_cal();
	if(r7==1)
	    printf("not prime\n\n");
	 else  
	    printf("prime\n\n");
	    
	int r8=strong_cal();
	if(r8==1)
	    printf("strong number\n\n");
	else
	    printf(" not strong number\n\n");
	
}
int sum_cal()
{
	int start=1,end=5,sum=0;
	while(start>=1 && start<=5)
	{
		sum=sum+start;
		start++;
	}
	
	return sum;
}
int armstrong_cal()
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
	    return 1;
	else
	    return 0;
}
int factorial_cal()
{
	int num=6;
	int original_num=num;
	int factorial=1;
	while(num>=1)
	{
		factorial=factorial*num;
		num--;
	}
	return factorial;
}
int firstlast_cal()
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
	return sum;
}
int palindrome()
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
	    return 1;
	else
	    return 0;
}  
int perfect_cal()
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
	    return 1;
	else
	    return 0;
}
int prime_cal()
{
	int no=19;
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
int strong_cal()
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
        return 1;
    else
        return 0;
}