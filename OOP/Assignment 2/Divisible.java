class Divisible
{
public static void main(String args[])
{
	int a=2;
	if(a%3==0 && a%5==0)
	{
		System.out.printf("number is divisible by both");
	}
	else if(a%5==0)
	{
		System.out.printf("number is divisible by 5 not 3");
	}
	else if(a%3==0)
	{
		System.out.printf("number is divisible by 3 not 5");
	}
	else
	{
		System.out.printf("number is divisible by none");
	}
}
}