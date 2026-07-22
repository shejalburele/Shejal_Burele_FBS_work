// max and min number in array
#include<stdio.h>
void main()
{
	int arr[5];
	printf("enter the array");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
		
	int max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	printf("maximum number is:%d",max);
	printf("\n");
		
	int min=arr[0];
	for(int i=0;i<5;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	printf("minimum number is:%d",min);
}