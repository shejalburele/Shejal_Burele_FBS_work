// hollow sq with diagonal pattern
#include<stdio.h>
void main()
{
	int no=5;
	for(int row=1;row<=no;row++)
	{
		for(int col=1;col<=no;col++)
		{
			if(row==1 || row==5 || col==1 || col==5 || row==col)
			    printf("* ");
			else 
			    printf("  ");
		}
	printf(" \n");
	}
}