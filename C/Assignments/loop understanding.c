// loop understanding that how it works
#include<stdio.h>
void main()
{
	int i=1;
	while(i<10)
	{
		printf("fbs \n");       //loop is continue until the condition is false
		i++;                 //ex: when x=11 it goes it while condition and if it false then loop exit 
	}
	printf("outside while %d",i);
	
}