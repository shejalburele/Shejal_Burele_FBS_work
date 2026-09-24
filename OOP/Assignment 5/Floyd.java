class Floyd
{
public static void main(String args[])
{
    int no=4;
    int num=1;
    for(int row=1;row<=no;row++)
    {
    	for(int col=1;col<=row;col++)
    	{
    		System.out.printf("%d ",num);
    		num++;
		}
	System.out.printf(" \n");
	}
}
}