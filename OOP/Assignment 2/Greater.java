class Greater
{
public static void main(String args[])
{
	int a=20,b=10,c=31;
	if(a>b)
		if(a>c)
			System.out.printf("a=%d is greater \n",a);
		else
			System.out.printf("c=%d is greater \n",c);
	else if(b>a)
			if(b>c)
				System.out.printf("b=%d is greater \n",b);
			else
				System.out.printf("c=%d is greater \n",c);
}
}