#include<stdio.h>
int main()
{
	int len;
	int count=0;
	printf("ENTER THE SIZE OT THE ARRAY : \n");
	scanf("%d",&len);
	int arr[len];
	printf("ENTER THE ARRAYS : \n");
	for(int i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("THE ARRAY WITH LAST ROW IS ZERO IS : \n");
	for(int i=0;i<len;i++)
	{
			
		if(arr[i]!=0)
		{
			printf("%d",arr[i]);
		count++;
		}
	
	
	}
	for(int i=0;i<len-count;i++)
	{
		printf("0");
	}
return 0;
}