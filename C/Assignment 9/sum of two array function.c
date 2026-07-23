// take two array and add sum in third array
void store_arr(int*,int);
void sum_arr(int*,int,int*,int*);
#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	int crr[5];
	
	printf("Enter an array 1:");
	store_arr(arr,5);
	
	printf("Enter an array 2:");
	store_arr(brr,5);
	
	printf("sum of array 1 and array 2 is:");
	sum_arr(crr,5,arr,brr);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void sum_arr(int* crr,int size,int* arr,int* brr)
{
	for(int i=0;i<size;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf("%d ",crr[i]);
	}
	
}