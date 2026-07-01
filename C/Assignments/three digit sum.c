#include<stdio.h>
void main()
{
	int No=155,r1,r2,r3,a,sum,reverse;
	r1=No%10;
	a=No/10;
	r2=a%10;
	r3=a/10;
	sum=r1+r2+r3;
	printf("The Addition of the digits of given Number is:%d \n",sum);
	reverse=r1*100+r2*10+r3;
	printf("The Reverse of given Number is:%d",reverse);
}