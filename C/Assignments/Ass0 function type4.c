//Ass 0 que with parameter and with return type
int add_cal(int, int);
float area_circle(float);
float temperature_cal(float);
float area_triangle(float,float);
float average_cal(float, float, float, float, float);
int perimeter_cal(int, int);
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the two number");
	scanf("%d%d",&a,&b);
	int r1=add_cal(a,b);
	printf("The Addition of Two Integer is:%d \n\n",r1);
	
	float rad;
	printf("enter the radius of circle");
	scanf("%f",&rad);
	float r2=area_circle(rad);
	printf("The Area of circle is:%f \n\n",r2);
	
	float cel;
	printf("enter the temperature in celsius");
	scanf("%f",&cel);
	float r3=temperature_cal(cel);
	printf("Temperature of %f celsius to fahrenheit is:%f \n\n",cel,r3);
	
	float bas,hei;
	printf("enter the two number");
	scanf("%f%f",&bas,&hei);
	float r4=area_triangle(bas,hei);
	printf("The Area of triangle is %f \n\n",r4);
	
	float s1,s2,s3,s4,s5;
	printf("enter the marks of five subject");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	float r5=average_cal(s1,s2,s3,s4,s5);
	printf("The Average of Numbers is:%f \n\n",r5);
	
	int len,wid;
	printf("enter the length and width of rectangle");
	scanf("%d%d",&len,&wid);
	int r6=perimeter_cal(len, wid);
	printf("The Perimeter of Rectangle is %d \n\n",r6);
	
}
int add_cal(int x, int y)
{
	int add=x+y;
	return add;
}
float area_circle(float radius)
{
	float area=3.14*radius*radius;
	return area;
}
float temperature_cal(float celsius)
{
	float fahrenheit=(celsius*9/5)+32;
	return fahrenheit;
}
float area_triangle(float base,float height)
{
	float area=(base*height)/2.0;
	return area;
}
float average_cal(float num1, float num2, float num3, float num4, float num5)
{
	float avg;
	avg=(num1+num2+num3+num4+num5)/5.0;
	return avg;
}
int perimeter_cal(int length, int width)
{
	int perimeter=2*(length+width);
	return perimeter;
}
