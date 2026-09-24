class Inverted_pyramid
{
public static void main(String args[])
{
	int no=5;
	for(int row=no;row>=1;row--)
	{
		for(int space=1;space<row;space++)
		{
			System.out.printf(" ");
		}
		for(int star=1;star<=no-row+1;star++)
		{
			System.out.printf("* ");
		}
	System.out.printf(" \n");
	}
}
}