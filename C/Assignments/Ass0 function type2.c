// Ass 0 without parameter and with return type
int add_cal();
float area_circle();
float temperature_cal();
float area_triangle();
float average();
int perimeter_rectangle();
#include<stdio.h>
void main()
{
	int r1=add_cal();
	printf("The Addition of Two Integer is:%d \n\n",r1);
	
	float r2=area_circle();
	printf("The Area of circle is:%f \n\n",r2);
	
	float r3=temperature_cal();
	printf("Temperature in fahrenheit is:%f \n\n",r3);
	
	float r4=area_triangle();
	printf("The Area of triangle is %f\n\n",r4);
	
	float r5=average();
	printf("The Average of Numbers is:%f\n\n",r5);
	
	int r6=perimeter_rectangle();
	printf("The Perimeter of Rectangle is %d \n\n",r6);
}
int add_cal()
{
	int a=5,b=26,add;
	add=a+b;
	return add;
}
float area_circle()
{
	float radius=7.9,area;
	area=3.14*radius*radius;
	return area;
}
float temperature_cal()
{
	float celsius=32.3,fahrenheit;
	fahrenheit=(celsius*9/5)+32;
	return fahrenheit;
}
float area_triangle()
{
	float base=5,height=15,area;
	area=(base*height)/2;
	return area;
}
float average()
{
	float num1=15,num2=17,num3=20,num4=25,num5=30;
	float avg;
	avg=(num1+num2+num3+num4+num5)/5;
	return avg;
}
int perimeter_rectangle()
{
	int lenght=10,width=20,perimeter;
	perimeter=2*(lenght+width);
	return perimeter;
}
