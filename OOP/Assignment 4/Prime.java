class Prime
{
public static void main(String args[])
{
	int no=10;
	if(no==1 || no==0)
	    System.out.printf("%d is not prime",no);
	else
	{
		for(int start=2;start<=no;start++)
		{
			int prime=0;
			for(int i=2;i<start;i++)
			{
				if(start%i==0)
				    prime=1;
			}
			if(prime==0)
			     System.out.printf("%d ",start);
		}
	}
}
}