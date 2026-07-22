//alternate number printing in array
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter the array:");
	for(int i=0;i<6;i++)
		scanf("%d",&arr[i]);
		
	printf("displaying array:");
	for(int i=0;i<6;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}