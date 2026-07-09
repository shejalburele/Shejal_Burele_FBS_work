// inverted RAT
#include<stdio.h>
void main()
{
	int no=5;
	for(int row=no;row>=1;row--)
	{
		for(int col=1;col<=row;col++)
		{
			printf("*");
		}
		printf(" \n");
	}
}