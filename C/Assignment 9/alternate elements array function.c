//print the alternate element in an array
void store_arr(int*,int);
void alter_arr(int*,int);
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter an array:");
	
	store_arr(arr,6);
	printf("Alternated element in array are:");
	alter_arr(arr,6);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void alter_arr(int* arr, int size)
{
	for(int i=0;i<size;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}
