// find the minimum and maximun number in array
void store_arr(int*,int);
void minimum_arr(int*,int);
void maximum_arr(int*,int);
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter an array:");
	store_arr(arr,6);
	
	minimum_arr(arr,6);
	
	maximum_arr(arr,6);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}

void minimum_arr(int* arr,int size)
{
	int min=arr[0];
	for(int i=1;i<size;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	printf("%d is minimum in array\n",min);
}

void maximum_arr(int* arr,int size)
{
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	printf("%d is maximum in array",max);
}
	