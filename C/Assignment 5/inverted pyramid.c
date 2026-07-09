// inverted pyramid
#include<stdio.h>
void main()
{
	int no=5;
	for(int row=no;row>=1;row--)
	{
		for(int space=1;space<row;space++)
		{
			printf(" ");
		}
		for(int star=1;star<=no-row+1;star++)
		{
			printf("* ");
		}
	printf(" \n");
	}
}