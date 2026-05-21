#include<stdio.h>
int main ()
{
	int len;
	printf("Enter The Length of the array : \n");
	scanf("%d",&len);
	int arr[len];
	printf("Enter the array : \n");
	for(int i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<len;i++)
	{
		for(int j=len-1;j>=0;j--)
		{
	 if(arr[i]==0)
	 {
	 arr[i]==arr[j];
	 }
	}
     }
     for(int j=0;j<len;j++)
	{
		printf("%d",arr[j]);
	}
}