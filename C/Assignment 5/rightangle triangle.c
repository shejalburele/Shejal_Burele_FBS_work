// right angle triangle
#include<stdio.h>
void main()
{
	int no=5;
	for(int row=1;row<=no;row++)
	{
		for(int col=1;col<=row;col++)
		{
			printf("*");
		}
		printf(" \n");
	}
}