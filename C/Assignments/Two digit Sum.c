#include<stdio.h>
void main()
{
	int No=15,r1,r2,sum,reverse;
	r1=No%10;
	r2=No/10;
	sum=r1+r2;
	printf("The addition of the digits of given Number is:%d \n",sum);
	reverse=r1*10+r2;
	printf("The Reverse of the given Number is:%d",reverse);
}