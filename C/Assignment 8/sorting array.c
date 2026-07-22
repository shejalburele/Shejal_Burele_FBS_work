// sorting an array
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter an array:");
	for(int i=0;i<6;i++)
		scanf("%d",&arr[i]);
		
	for(int i=0;i<6;i++)
	{
		int temp;
		for(int j=i+1;j<6;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	
		}
		printf("%d ",arr[i]);
	}
}