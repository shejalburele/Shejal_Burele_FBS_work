class Armstrong
{
public static void main(String args[])
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
	    System.out.printf("is armstrong");
	else
	    System.out.printf("not armstrong");
}
}