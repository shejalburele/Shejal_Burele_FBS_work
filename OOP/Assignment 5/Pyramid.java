class Pyramid
{
public static void main(String args[])
{
	int no=5;
	for(int row=1;row<=5;row++)
	{
		for(int space=1;space<=no-row;space++)
		    System.out.printf(" ");
		for(int star=1;star<=row;star++)
		    System.out.printf("* ");
	System.out.printf(" \n");
	}
}
}