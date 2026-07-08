// 1 to n prime number
#include<stdio.h>
void main()
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
}