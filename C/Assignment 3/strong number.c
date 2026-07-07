// strong number
//#include<stdio.h>
//void main()
//{
//	int num=145,i=1;
//	int original_num=num;
//	int rem,fac1=1,fac2=1,fac3=1,sum;
//	rem=num%10;
//	while(rem>=i)
//	{
//		fac1=fac1*rem;
//		rem--;
//	}
//	num=num/10;
//	rem=num%10;
//	while(rem>=i)
//	{
//		fac2=fac2*rem;
//		rem--;
//	}
//	num=num/10;
//	rem=num%10;
//	while(rem>=i)
//	{
//		fac3=fac3*rem;
//		rem--;
//	}
//	sum=fac1+fac2+fac3;
//	if(sum==original_num)
//	    printf("%d is strong number",original_num);
//    else
//        printf("%d number is not strong number",original_num);
//}
#include<stdio.h>
void main()
{
	int no=40585,ori_no=no,i=1;
	int rem,sum=0;
	while(no>0)
	{
    rem=no%10;
    int fac=1;
	while(rem>=i)
	{
		fac=fac*rem;
	rem--;
	}
	sum=sum+fac;
	no=no/10;
    }
    if(sum==ori_no)
        printf("strong number");
    else
        printf("not strong number");
}
 
