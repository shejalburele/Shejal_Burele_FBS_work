// find odd and even amoung the number
void store_arr(int*,int);
void even_arr(int*,int,int*);
void odd_arr(int*,int,int*);
#include<stdio.h>
void main()
{
	int arr[6];
	int brr[6];
	int crr[6];
	printf("Enter an array:");
	
	store_arr(arr,6);
	
	printf("even numbers are:");
	even_arr(arr,6,brr);
	
	printf("odd numbers are:");
	odd_arr(arr,6,crr);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void even_arr(int* arr, int size,int* brr)
{
	int e=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)	
		{
			brr[e]=arr[i];
			e++;
		}
	}
	for(int i=0;i<e;i++)
		printf("%d ",brr[i]);
	printf("\n");
}
void odd_arr(int* arr, int size,int* crr)
{
	int o=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2!=0)	
		{
			crr[o]=arr[i];
			o++;
		}
	}
	for(int i=0;i<o;i++)
		printf("%d ",crr[i]);
}