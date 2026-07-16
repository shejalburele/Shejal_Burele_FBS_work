// Ass 0 question without parameter and without returntype
void Add_cal();
void Area_circle();
void temperature_cal();
void Area_triangle();
void average_cal();
void min_hour();
void perimeter_rectangle();
void sq_cube();
void subject_marks();
void swap_cal();
#include<stdio.h>
void main()
{
	Add_cal();
  	Area_circle();
  	temperature_cal();
  	Area_triangle();
    average_cal();
    min_hour();
    perimeter_rectangle();
    sq_cube();
    subject_marks();
    swap_cal();
}
void Add_cal()
{
	int a=24,b=25,add;
	add=a+b;
	printf("The Addition of Two Integer is:%d \n \n",add);
}
void Area_circle()
{
	float radius=2,area;
	area=3.14*radius*radius;
	printf("The Area of circle is:%f \n \n",area);
}
void temperature_cal()
{
	float celsius=32.3,fahrenheit;
	fahrenheit=(celsius*9/5)+32;
	printf("Temperature of %f celsius to fahrenheit is:%f \n \n",celsius,fahrenheit);
}
void Area_triangle()
{
	float base=5,height=15,area;
	area=(base*height)/2;
	printf("The Area of triangle is %f \n \n",area);
}
void average_cal()
{
	float num1=15,num2=17,num3=20,num4=25,num5=30;
	float avg;
	avg=(num1+num2+num3+num4+num5)/5;
	printf("The Average of Numbers is:%f \n \n",avg);
}
void min_hour()
{
	int minutes=70,hour,min;
	hour=minutes/60;
	min=minutes%60;
	printf("The conversion of %d min is %d hour:%d min \n \n",minutes,hour,min);
}
void perimeter_rectangle()
{
	int lenght=10,width=20,perimeter;
	perimeter=2*(lenght+width);
	printf("The Perimeter of Rectangle is %d \n \n",perimeter);
}
void sq_cube()
{
	float side=5,square,cube;
	square=side*side;
	cube=side*side*side;
	printf("The Square of %f is:%f \n",side,square);
	printf("The Cube of %f is:%f \n \n",side,cube);
}
void subject_marks()
{
	float english=73,maths=95,marathi=89,hindi=86,science=92,total,percentage;
	total=english+maths+marathi+hindi+science;
	printf("The Total marks obtained is %f out of 500 \n",total);
	percentage=(total / 500) * 100;
	printf("percentage obtained is %f \n \n",percentage);
}
void swap_cal()
{
	int a=15,b=17,c;
	printf("Before Swap:a=%d and b=%d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swap:a=%d abd b=%d \n \n",a,b);
}