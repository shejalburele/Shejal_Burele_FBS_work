// armstrong
//#include<stdio.h>
//void main()
//{
//	int num=153,sum=0,rem;
//	int original_num=num;
//	while(num>0)
//	{
//		rem=(num%10);
//		sum=sum+rem*rem*rem;
//		num=num/10;
//	}
//	if(original_num==sum)
//	    printf("the number is armstrong");
//	else
//	    printf("the number is not armstrong");
//}

#include<stdio.h>
void main()
{
	int no=1634;
	int rem,sum=0;
	int ori_no=no;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	no=ori_no;

	while(no>0)
	{
		rem=no%10;
		
		int i=1;
	    int res=1;
	    while(i<=count)
	    {
		    res=res*rem;
	    i++;
	    }
		sum=sum+res;
		no=no/10;
	}
	if(sum==ori_no)
	    printf("is armstrong");
	else
	    printf("not armstrong");
}