//accept array and print only prime number
void store_arr(int*, int);
void prime_arr(int*, int);
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter an array:");
	store_arr(arr,6);
	
	printf("prime numbers are:");
	prime_arr(arr,6);
}
void store_arr(int* arr, int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void prime_arr(int* arr, int size)
{
	int flag=0;
	for(int i=0;i<size;i++)
	{
		for(int j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
				flag=1;
				break;
		}
		if(flag==0)
			printf("%d ",arr[i]);
	}
}