class Price
{
public static void main(String args[])
{
	double price=100;
	char isStudent='n';
	double discount;
	double fprice;
	if(isStudent=='y')
	{
		if(price>500)
		{
			discount=0.20*price;
			
		}
		else
		{
			discount=0.10*price;
		
		}
	}
	else if(price>600)
		{
			discount=0.15*price;
			
		}
              else
		{
			discount=0;
		}		
		
	fprice=price-discount;
	System.out.printf("the final price is:%f after the discount:%f \n",fprice,discount);
		
	
	
}
}