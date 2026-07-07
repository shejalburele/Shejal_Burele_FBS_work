#include<stdio.h>
void main()
{
	char ch='V';
	printf("the character is:%c \n",ch);
	if(ch>='A' && ch<='Z')
	{
	    ch=ch+32;
	}
	else
	{
	    ch=ch-32;	  
	}
	printf("the character is:%c",ch);
}