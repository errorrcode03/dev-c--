#include<stdio.h>
int main()
{
	int len;
	printf("Enter the length of the array  : \n");
	scanf("%d",&len);
	int arr[len];
	printf("Enter the array : \n");
	for(int i=0;i<len-1;i++)
	{
		scanf(" %d ",&arr[i]);
	}
	for(int i=0;i<=len-1;i++)
	{
		for(int j=i+1;j<=len-1;j++)
		{
			if(arr[i]==arr[j])
			{
				printf(" dublicate = %d \n",arr[i]);
				break;
			}
			else
			{
				printf("no dublicates \n");
				
			}
		}
	}
return 0;
}