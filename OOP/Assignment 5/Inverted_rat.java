class Inverted_rat
{
public static void main(String args[])
{
	int no=5;
	for(int row=no;row>=1;row--)
	{
		for(int col=1;col<=row;col++)
		{
			System.out.printf("*");
		}
		System.out.printf(" \n");
	}
}
}