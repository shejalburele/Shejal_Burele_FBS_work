// pyramid pattern
#include<stdio.h>
void main()
{
	int no=5;
	for(int row=1;row<=5;row++)
	{
		for(int space=1;space<=no-row;space++)
		    printf(" ");
		for(int star=1;star<=row;star++)
		    printf("* ");
	printf(" \n");
	}
}