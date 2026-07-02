// price with if else
#include<stdio.h>
void main()
{
	float price=100;
	char isStudent='n';
	float discount;
	float fprice;
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
		
	fprice=price-discount;
	printf("the final price is:%f after the discount:%f \n",fprice,discount);
		
	
	
}
