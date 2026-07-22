//take two array and sum into third array
#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	int crr[5];
	printf("Enter the array 1:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter the array 2:");
	for(int i=0;i<5;i++)
		scanf("%d",&brr[i]);
		
	printf("Adding array 1 and array 2:");
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf("%d ",crr[i]);
	}
}
