void add_cal(int*, int*);
void area_circle(float*);
void temperature_cal(float*);
void area_triangle(float*,float*);
void average_cal(float*, float*, float*, float*, float*);
void min_hour(int*);
void perimeter_cal(int*, int*);
void sq_cube(float*);
void marks_cal(float*, float*, float*, float*, float*);
void swap_cal(int*,int*);
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the two number");
	scanf("%d%d",&a,&b);
	add_cal(&a,&b);
	
	float rad;
	printf("enter the radius of circle");
	scanf("%f",&rad);
	area_circle(&rad);
	
	float cel;
	printf("enter the temperature in celsius");
	scanf("%f",&cel);
	temperature_cal(&cel);
	
	float bas,hei;
	printf("enter the two number");
	scanf("%f%f",&bas,&hei);
	area_triangle(&bas,&hei);
	
	float s1,s2,s3,s4,s5;
	printf("enter the marks of five subject");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	average_cal(&s1,&s2,&s3,&s4,&s5);
	
	int minu;
	printf("enter the minutes");
	scanf("%d",&minu);
	min_hour(&minu);
	
	int len,wid;
	printf("enter the length and width of rectangle");
	scanf("%d%d",&len,&wid);
	perimeter_cal(&len,&wid);
	
	float sid;
	printf("enter the number");
	scanf("%f",&sid);
	sq_cube(&sid);
	
	float m1,m2,m3,m4,m5;
	printf("enter the marks of five subject");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	marks_cal(&m1,&m2,&m3,&m4,&m5);
	
	
	int no1,no2;
	printf("enter the two number");
	scanf("%d%d",&no1,&no2);
	swap_cal(&no1, &no2);
	
}
void add_cal(int* x, int* y)
{
	int add=*x + *y;
	printf("The Addition of Two Integer is:%d \n\n",add);
}
void area_circle(float* radius)
{
	float area=3.14 * *radius * *radius;
	printf("The Area of circle is:%f \n\n",area);
}
void temperature_cal(float* celsius)
{
	float fahrenheit=(*celsius * 9/5)+32;
	printf("Temperature of %f celsius to fahrenheit is:%f \n\n",celsius,fahrenheit);
}
void area_triangle(float* base,float* height)
{
	float area=(*base * *height)/2.0;
	printf("The Area of triangle is %f \n\n",area);
}
void average_cal(float* num1, float* num2, float* num3, float* num4, float* num5)
{
	float avg;
	avg=(*num1 + *num2 + *num3 + *num4 + *num5)/5.0;
	printf("The Average of Numbers is:%f \n\n",avg);
}
void min_hour(int* minutes)
{
	int hour,min;
	hour=*minutes/60;
	min=*minutes%60;
	printf("The conversion of %d min is %d hour:%d min \n\n",*minutes,hour,min);
}
void perimeter_cal(int* length, int* width)
{
	int perimeter=2*(*length + *width);
	printf("The Perimeter of Rectangle is %d \n\n",perimeter);
}
void sq_cube(float* side)
{
	float square,cube;
	square=*side * *side;
	cube=*side * *side * *side;
	printf("The Square of %f is:%f \n",*side,square);
	printf("The Cube of %f is:%f \n\n",*side,cube);
}
void marks_cal(float* eng, float* math, float* mar, float* hin, float* sci)
{
	float total,percentage;
	total=*eng + *math + *mar + *hin + *sci;
	printf("The Total marks obtained is %f out of 500 \n",total);
	percentage=(total / 500) * 100;
	printf("percentage obtained is %f\n\n",percentage);
}
void swap_cal(int* x,int* y)
{
	int c;
	printf("Before Swap:x=%d and y=%d \n",*x,*y);
	c=*x;
	*x=*y;
	*y=c;
	printf("After swap:x=%d abd y=%d \n\n",*x,*y);
}