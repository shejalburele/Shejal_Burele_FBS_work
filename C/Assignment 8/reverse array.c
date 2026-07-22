// reverse an array
#include<stdio.h>
void main()
{
	int size=6;
	int arr[size];
	printf("Enter an array:");
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
		
	printf("reverse of array is:");
	for(int i=0;i<size/2;i++)
	{
		int temp;
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
    }
    for(int i=0;i<size;i++)
    	printf("%d ",arr[i]);
}