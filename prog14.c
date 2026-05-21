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
	for(int i=len-1;i>=0;i--)
	{
		for(int j=1;j<=len;j++)
		{
			if(num[i]>num[i-j])
			{
				printf("%d",num[i-j]);
			}
		else 
		  {
		    }
		
		}
		}
	return 0;
	}
	
