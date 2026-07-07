#include<stdio.h>
void main()
{
	int marks=12;
	if(marks>=75 )
		printf("a++");
    if(marks>=65 && marks<75)
		printf("b++");
	if(marks>=45 && marks<65)
		printf("c++");
	if(marks>=35 && marks<45)
		printf("pass");
    if(marks<35)        
		printf("fail");     
	          
        
    
}