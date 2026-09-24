class Diamond
{
public static void main(String args[])
{
	int no=4;
	for(int row=1;row<=no;row++)
	{
		for(int col=1;col<=row;col++)
		{
			System.out.printf("* ");
		}
	System.out.printf(" \n");
	}
	for(int row=no-1;row>=1;row--)
	{
		for(int col=1;col<=row;col++)
		{
			System.out.printf("* ");
		}
	System.out.printf(" \n");
	}
}
}