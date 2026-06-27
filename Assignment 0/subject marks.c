#include<stdio.h>
void main()
{
	float english=73,maths=95,marathi=89,hindi=86,science=92,total,percentage;
	total=english+maths+marathi+hindi+science;
	printf("The Total marks obtained is %f out of 500 \n",total);
	percentage=(total / 500) * 100;
	printf("percentage obtained is %f",percentage);
}