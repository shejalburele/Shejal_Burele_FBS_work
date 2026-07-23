//sort an array
void store_arr(int*,int);
void sort_arr(int*,int);
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter ar array:");
	store_arr(arr,6);
	
	printf("sorted array is:");
	sort_arr(arr,6);
}
void store_arr(int* arr,int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void sort_arr(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
				{
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
				
		}
		printf("%d ",arr[i]);
	}
}