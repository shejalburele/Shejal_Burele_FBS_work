class Triangle
{
public static void main(String args[])
{
	int a=5,b=6,c=15;
	if(a==b && b==c)
	{
		System.out.printf("the triangle is equilateral");
	}
	else if(a==b || b==c || a==c)
	{
		System.out.printf("the triangle is isoscalen");
	}
	else
	{
		System.out.printf("the triangle is scalene");
	}
}
}