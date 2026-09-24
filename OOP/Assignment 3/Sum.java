class Sum
{
public static void main(String args[])
{
	int num=12345,sum;
	int r1,r2;
	r1=num%10;
	while(num>10)
	{
		num=num/10;
	}
	r2=num;
	sum=r1+r2;
	System.out.printf("%d(%d+%d)",sum,r2,r1);
}
}