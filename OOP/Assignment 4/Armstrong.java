class Armstrong
{
public static void main(String args[])
{
	int no=160;
	for(int i=1;i<=no;i++)
	{
		int j=i;
		int count=0;
		while(j>0)
		{
			count++;
			j=j/10;
		}
	    j=i;
	    int rem,sum=0;
	    while(j>0)
	    {
	    	rem=j%10;
	    	int res=1;
	    	for(int a=1;a<=count;a++)
	    	{
	    		res=res*rem;
			}
			sum=sum+res;
			j=j/10;
		}
		
		if(sum==i)
		    System.out.printf("%d ",i);
	}
}
}