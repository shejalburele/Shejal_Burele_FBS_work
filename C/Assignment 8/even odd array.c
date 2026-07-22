//even and odd 
#include<stdio.h>
void main()
{
	int arr[6];
	int even[6];
	int odd[6];
	printf("Enter the array:");
	for(int i=0;i<6;i++)
		scanf("%d",&arr[i]);
		
	int e=0;
	for(int i=0;i<6;i++)
	{
		if(arr[i]%2==0)
		{
			even[e]=arr[i];
			e++;
		}
    }
    printf("even numbers are:");
	for(int i=0;i<e;i++)
	{
		printf("%d ",even[i]);
    } 
    	printf("\n");
	int o=0;
	for(int i=0;i<6;i++)
	{
		if(arr[i]%2!=0)
		{
			odd[o]=arr[i];
			o++;
		}
	}
	printf("odd number are:");
	for(int i=0;i<o;i++)
	{
		printf("%d ",odd[i]);
	}
}