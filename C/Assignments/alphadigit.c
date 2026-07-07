#include<stdio.h>
void main()
{
	char ch='s';
	if(ch>='a' && ch<='z' ||
	   ch>='A' && ch<='Z')
	   {
	   	    printf("alphabet");
	   }
	   else
	   {
	   	    printf("digit");
	   }
}