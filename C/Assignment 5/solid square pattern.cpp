// solid square pattern
#include<stdio.h>
int main()
{
    int no=4;
	for(int row=1;row<=no;row++)
	{
		for(int col=1;col<=no;col++)
		{
			printf("* ");
		}
	    printf(" \n");
	}
}