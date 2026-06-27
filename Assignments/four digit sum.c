#include<stdio.h>
void main()
{
	int No=2005,r1,r2,r3,r4,a,b,sum,reverse;
	r1=No%10;
	a=No/10;
	r2=a%10;
	b=a/10;
	r3=b%10;
	r4=b/10;
	sum=r1+r2+r3+r4;
	printf("The Addition of the digits of given Number is:%d \n",sum);
	reverse=r1*1000+r2*100+r3*10+r4;
	printf("The Reverse of the given Number is:%d",reverse);
}