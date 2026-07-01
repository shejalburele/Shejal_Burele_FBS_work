#include<stdio.h>
void main()
{
	int num=124,r1,r2,r3,a,reverse;
    r1=num%10;
	a=num/10;
	r2=a%10;
	r3=a/10;
	reverse=r1*100+r2*10+r3;
	if(reverse==num)
        printf("the number is palindrome");
        else
            printf("the number is not palindrome");
}