// strong number from 1 to n
#include<stdio.h>
int main()
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
}