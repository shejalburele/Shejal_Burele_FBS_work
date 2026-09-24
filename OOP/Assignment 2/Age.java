class Age
{
public static void main(String args[])
{
	int age =167;
	if(age<12)
	{
		System.out.printf("child");
	}
	else if(age>=12 && age<=19)
	{
		System.out.printf("teenager");
	}
	else if(age>=20 && age<=59)
	{
		System.out.printf("adult");
	}
	else
	{
		System.out.printf("senior");
	}
}
}