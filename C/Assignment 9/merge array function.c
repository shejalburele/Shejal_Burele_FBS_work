#include<stdio.h>
void store_arr(int*,int);
void merge_arr(int*,int,int*,int*);
void main()
{
	int arr[5];
	int brr[5];
	int crr[10];
	
	printf("Enter an array 1:");
	store_arr(arr,5);
	
	printf("Enter an array 2:");
	store_arr(brr,5);
	
	printf("merging array 1 and array 2:");
	merge_arr(crr,10,arr,brr);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void merge_arr(int* crr,int size,int* arr,int* brr)
{
	for(int i=0;i<5;i++)
		crr[i]=arr[i];
		
	for(int i=0;i<5;i++)
		crr[i+5]=brr[i];
		
	for(int i=0;i<size;i++)
		printf("%d ",crr[i]);
}
