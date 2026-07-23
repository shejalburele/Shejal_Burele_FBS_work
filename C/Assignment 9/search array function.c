// search the given number in array
void store_arr(int*,int);
void search_arr(int*,int);
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter an array:");
	store_arr(arr,6);
	
	search_arr(arr,6);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}

void search_arr(int* arr, int size)
{
	int ele;
	int flag=-1;
	printf("Enter the element you want to search:");
	scanf("%d",&ele);
	
	for(int i=0;i<size;i++)
	{
		if(ele==arr[i])
		{
			flag=i;
			break;
		}
	}
	if(flag==-1)
		printf("element not found");
	else
		printf("%d is found at %d index",ele,flag);
}

