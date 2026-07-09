//floyd's triangle pattern
#include<stdio.h>

void main()
{
    int no=4;
    int num=1;
    for(int row=1;row<=no;row++)
    {
    	for(int col=1;col<=row;col++)
    	{
    		printf("%d ",num);
    		num++;
		}
	printf(" \n");
	}
}