class Strong
{
public static void main(String args[])
{
	int no=150;
	for(int start=1;start<=no;start++)
	{
		int tem=start;
		int rem,sum=0;
		while(tem>0)
		{
			rem=tem%10;
			int fac=1;
			for(int i=1;i<=rem;i++)
			{
				fac=fac*i;
			}
			sum=sum+fac;
			tem=tem/10;
		}
		if(sum==start)
		    System.out.printf("%d ",start);
	}
}
}