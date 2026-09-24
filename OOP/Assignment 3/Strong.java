class Strong
{
public static void main(String args[])
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
        System.out.printf("strong number");
    else
        System.out.printf("not strong number");
}
}