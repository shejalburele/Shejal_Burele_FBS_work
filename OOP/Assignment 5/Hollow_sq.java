class Hollow_sq
{
public static void main(String args[])
{
	int no=4;
	for(int row=1;row<=no;row++)
	{
		for(int col=1;col<=no;col++)
		{
			if(row==1 || row==4 || col==1 || col==4)
			    System.out.printf("* ");
			else
			    System.out.printf("  ");
		}
	System.out.printf(" \n");
	}
}
}