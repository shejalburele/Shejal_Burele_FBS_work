#include<stdio.h>
void main()
{
	int No=7654321,r1,r2,r3,r4,r5,r6,r7,a,b,c,d,e,sum,reverse;
	r1=No%10;
	a=No/10;
	r2=a%10;
	b=a/10;
	r3=b%10;
	c=b/10;
	r4=c%10;
	d=c/10;
	r5=d%10;
	e=d/10;
	r6=e%10;
	r7=e/10;
	sum=r1+r2+r3+r4+r5+r6+r7;
	printf("The Addition of the digit of given Number is:%d \n",sum);
	reverse=r1*1000000+r2*100000+r3*10000+r4*1000+r5*100+r6*10+r7;
	printf("The Reverse of the given Number is:%d",reverse);
}