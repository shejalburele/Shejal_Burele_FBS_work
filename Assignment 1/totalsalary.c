#include<stdio.h>
void main()
{
	float Basic=6000,da,ta,hra,Total_Salary;
	if(Basic<=5000)
	{
		da=10.0/100*Basic;
		ta=20.0/100*Basic;
		hra=25.0/100*Basic;
		Total_Salary=Basic+da+ta+hra;
		printf("the total salary is:%f",Total_Salary);
	}
	else
	{
		da=15.0/100*Basic;
		ta=25.0/100*Basic;
		hra=30.0/100*Basic;
		Total_Salary=Basic+da+ta+hra;
		printf("the total salary is:%f",Total_Salary);
	}
	  
}