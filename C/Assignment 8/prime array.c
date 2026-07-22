// prime number array
#include<stdio.h>
void main()
{
	int arr[10];
	printf("Enter the array:");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	
	printf("prime number in array:");
	for(int i=0;i<10;i++)
	{
		int flag=0;
		for(int j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				flag=1;
				break;
	      	}
        }
		if(flag==0)
			printf("%d ",arr[i]);
	}
}