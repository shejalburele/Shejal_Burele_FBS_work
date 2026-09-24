class Add
{
public static void main(String args[])
{
	int start=1,end=5,sum=0;
	while(start>=1 && start<=5)
	{
		sum=sum+start;
		start++;
	}
	
	System.out.printf("the sum of numbers in given range is:%d",sum);
}
}