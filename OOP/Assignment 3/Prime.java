class Prime
{
public static void main(String args[])
{
	int no=19;
	int i=2;
	while(i<no)
	{
		if(no%i==0)
		{
		    System.out.printf("not prime");
		    break;
	    }
	i++;
	}
	if(i==no)
	    System.out.printf("prime");
}
}