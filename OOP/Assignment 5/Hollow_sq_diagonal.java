class Hollow_sq_diagonal
{
public static void main(String args[])
{
	int no=5;
	for(int row=1;row<=no;row++)
	{
		for(int col=1;col<=no;col++)
		{
			if(row==1 || row==5 || col==1 || col==5 || row==col)
			    System.out.printf("* ");
			else 
			    System.out.printf("  ");
		}
	System.out.printf(" \n");
	}
}
}