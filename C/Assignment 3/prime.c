// prime or not
//#include<stdio.h>
//void main()
//{
//	int num=7;
//	int i=2;
//	int prime=1;
//	while(i<num)
//	{
//		if(num%i==0)
//	        prime=0;
//	i++;
//	}
//	if(prime==1)
//        printf("the number is prime");
//    else
//        printf("the number is not prime");
//}

//OR
#include<stdio.h>
void main()
{
	int no=19;
	int i=2;
	while(i<no)
	{
		if(no%i==0)
		{
		    printf("not prime");
		    break;
	    }
	i++;
	}
	if(i==no)
	    printf("prime");
}