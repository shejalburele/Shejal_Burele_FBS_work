class Factorial
{
public static void main(String args[])
{
	int num=6;
	int original_num=num;
	int factorial=1;
	while(num>=1)
	{
		factorial=factorial*num;
		num--;
	}
	System.out.printf("the factorial of %d is:%d",original_num,factorial);
}
}