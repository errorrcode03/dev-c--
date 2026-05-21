#include<stdio.h>
int main()
{
	int len;
	printf("Enter the length of the array :  \n");
	scanf("%d",&len);
	int num[len];
	printf("Enter the array :  \n");
	for(int i=0;i<len;i++)
	{
		scanf("%d",&num[i]);
	}
	printf(" The second biggest element of the array is : ");
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(num[i]>num[j-i])
			{
				printf("%d",num[j-i]);
			}
			else
			{
			}
		}
		}
	return 0;
	}
	
