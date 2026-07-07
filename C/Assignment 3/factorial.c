//  factorial
#include<stdio.h>
void main()
{
	int num=6;
	int original_num=num;
	int factorial=1;
	while(num>=1)
	{
		factorial=factorial*num;
		num--;
	}
	printf("the factorial of %d is:%d",original_num,factorial);
}