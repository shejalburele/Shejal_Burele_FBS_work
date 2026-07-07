// sum of number in range  1 to 5
#include<stdio.h>
void main()
{
	int start=1,end=5,sum=0;
	while(start>=1 && start<=5)
	{
		sum=sum+start;
		start++;
	}
	
	printf("the sum of numbers in given range is:%d",sum);
}