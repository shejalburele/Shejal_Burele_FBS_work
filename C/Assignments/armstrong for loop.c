// armstrong in for loop
#include<stdio.h>
void main()
{
	int no=1634,ori_no=no,count=0,sum=0,rem;
	for(count=0;no>0;no=no/10)
	{
		count++;
	}
	no=ori_no;
	for( ;no>0;no=no/10)
	{
		rem=no%10;
		int res=1;
		for(int i=1;i<=count;i++)
		{
			res=res*rem;	
		}
		sum=sum+res;
	}
		
	if(sum==ori_no)
	    printf("armstrong");
	else
	    printf("not armstrong");
}