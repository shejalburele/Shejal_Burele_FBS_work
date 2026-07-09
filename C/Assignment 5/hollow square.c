// hollow square
#include<stdio.h>
void main()
{
	int no=4;
	for(int row=1;row<=no;row++)
	{
		for(int col=1;col<=no;col++)
		{
			if(row==1 || row==4 || col==1 || col==4)
			    printf("* ");
			else
			    printf("  ");
		}
	printf(" \n");
	}
}