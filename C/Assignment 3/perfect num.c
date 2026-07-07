// perfect number
#include<stdio.h>
void main()
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
	    printf("%d is a perfect number",original_num);
	else
	    printf("%d is not a perfect number",original_num);
}