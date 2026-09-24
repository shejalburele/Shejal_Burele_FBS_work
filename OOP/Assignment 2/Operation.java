class Operation
{
public static void main(String args[])
{
	int a=50,b=20;
	char op='%';
	if(op == '+')
	{
	    System.out.printf("addition of %d and %d is:%d \n",a,b,a+b);
    }
    else if(op == '-')
    {
    	System.out.printf("substraction of %d and %d is:%d \n",a,b,a-b);
	}
	else if(op == '*')
	{
		System.out.printf("mul of %d and %d is:%d \n",a,b,a*b);
	}
	else if(op == '/')
	{
		System.out.printf("div of %d and %d is:%d \n",a,b,a/b);
	}
	else if(op == '%')
	{
		System.out.printf("mod of %d and %d is:%d",a,b,a%b);
	}
	else
	{
		System.out.printf("invalid operator");
	}
	
}
}