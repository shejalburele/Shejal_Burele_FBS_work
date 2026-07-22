// search given number in array
#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter the array:");
	for(int i=0;i<6;i++)
		scanf("%d",&arr[i]);
	printf("\n");
		
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	
	int flag=-1;
	for(int i=0;i<6;i++)
	{
		if(num==arr[i])
		{
			flag=i;
			break;
		}
	}
	if(flag==-1)
		printf("%d is not found in array",num);
	else
		printf("%d is found in array in index %d",num,flag);
	
}