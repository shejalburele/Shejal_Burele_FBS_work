class Perfect
{
public static void main(String args[])
{
	int num=496;
	int i=1;
	int sum=0;
	int original_num=num;
	while(i<num)
	{
		if(num%i==0)
	        sum=sum+i;
	i++;
	}
	if(sum==original_num)
	    System.out.printf("%d is a perfect number",original_num);
	else
	    System.out.printf("%d is not a perfect number",original_num);
}
}