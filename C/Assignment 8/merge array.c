//merge two array
#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	int crr[10];
	printf("Enter the array 1:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter the array 2:");
	for(int i=0;i<5;i++)
		scanf("%d",&brr[i]);
		
	printf("merging array 1 and array 2:");
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i];
	}
	
	for(int i=0;i<5;i++)
	{
		crr[i+5]=brr[i];
	}
	
	for(int i=0;i<10;i++)
		printf("%d ",crr[i]);
}
