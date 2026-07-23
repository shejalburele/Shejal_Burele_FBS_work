// sum of all number in array
void store_arr(int*,int);
void sum_arr(int*,int);
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter an array:");
	store_arr(arr,6);
	
	sum_arr(arr,6);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}

void sum_arr(int* arr, int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all number in array is %d",sum);
}

