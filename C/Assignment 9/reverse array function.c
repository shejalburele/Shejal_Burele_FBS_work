// reverse the given array
void store_arr(int*,int);
void reverse_arr(int*,int);
#include<stdio.h>
void main()
{
	int size=6;
	int arr[size];
	
	printf("Enter an array:");
	store_arr(arr,size);
	
	printf("reverse array of given array is:");
	reverse_arr(arr,size);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void reverse_arr(int* arr,int size)
{
	for(int i=0;i<size/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}