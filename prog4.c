#include<stdio.h>
int main()
{
	int num,arr[num],i , j,flag;
	printf("plzz enter your array size : \n ");
	scanf("%d",&num);
	printf("plzz enter the array elements  	");
	for( i=0;i<num;i++)
	{
		scanf("%d",& arr[i]);
	
	}
	printf("the array is :");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
			{
				if (arr[i]==arr[j])
				
				flag ++;
			}	
	}
	if(flag>0)
	{
		printf(" \n dublicate  found");
	}
	else 
	{
		printf(" \n dublicate not found ");
	}
}