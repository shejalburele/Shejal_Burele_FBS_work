#include<stdio.h>
void main()
{
	int No=151617,r1,r2,r3,r4,r5,r6,a,b,c,d,sum,reverse;
	r1=No%10;
	a=No/10;
	r2=a%10;
	b=a/10;
	r3=b%10;
	c=b/10;
	r4=c%10;
	d=c/10;
	r5=d%10;
	r6=d/10;
	sum=r1+r2+r3+r4+r5+r6;
	printf("The Addition of the digit of given Number is:%d \n",sum);
	reverse=r1*100000+r2*10000+r3*1000+r4*100+r5*10+r6;
	printf("The Reverse of given Number is:%d",reverse);
}