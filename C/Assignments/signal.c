#include<stdio.h>    //1 for red,2 for yellow,,3 for green
void main()
{
	int signalstatus=2;
	if(signalstatus==1)
	{
		printf("stop");
	}
	else
	{
		if(signalstatus==2)
		{
			int emergency=0;
			if(emergency==1)
			{
				printf("go fast");
			}
			else
			{
			printf("slow down");
		    }
		}
		else
		{
			printf("go...");
		}
	}
}