// half diamond
#include<stdio.h>
void main()
{
	int no=4;
	for(int row=1;row<=no;row++)
	{
		for(int col=1;col<=row;col++)
		{
			printf("* ");
		}
	printf(" \n");
	}
	for(int row=no-1;row>=1;row--)
	{
		for(int col=1;col<=row;col++)
		{
			printf("* ");
		}
	printf(" \n");
	}
}