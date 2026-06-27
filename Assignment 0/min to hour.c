#include<stdio.h>
void main()
{
	int minutes=70,hour,min;
	hour=minutes/60;
	min=minutes%60;
	printf("The conversion of %d min is %d hour:%d min",minutes,hour,min);
}