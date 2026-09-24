class Sub
{
public static void main(String args[])
{
	double english=73,maths=95,marathi=89,hindi=86,science=92,total,percentage;
	total=english+maths+marathi+hindi+science;
	System.out.printf("The Total marks obtained is %f out of 500 \n",total);
	percentage=(total / 500) * 100;
	System.out.printf("percentage obtained is %f",percentage);
}
}