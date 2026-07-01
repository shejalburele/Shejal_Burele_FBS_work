#include<stdio.h>
void main()
{
	int No=15175, r1,r2,r3,r4,r5,a,b,c,sum,reverse;
	r1=No%10;
	a=No/10;
	r2=a%10;
	b=a/10;
	r3=b%10;
	c=b/10;
	r4=c%10;
	r5=c/10;
	sum=r1+r2+r3+r4+r5;
	printf("The Addition of the digits of given Number is:%d \n",sum);
	reverse=r1*10000+r2*1000+r3*100+r4*10+r5;
	printf("The Reverse of given Number is:%d",reverse);
}