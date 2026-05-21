#include<stdio.h>
int main()
{
	int len;
	printf("Enter the length of the array : \n");
	scanf("%d",&len);
	int ele[len];
	printf("Enter the elements  : \n");
	for(int i=0;i<len;i++)
	{
		scanf("%d",&ele[i]);
	}
	int sum;
	printf("Enter the element that you want to find the sum  : \n");
	scanf("%d",&sum);
	for (int i=0;i<len;i++)
	{
		for(int j=len-1;j>0;j--)
	if(ele[i]+ele[j]>sum || ele[i]+ele[j]<sum)
	{	
		continue;
	}
	else 
	{
		if(ele[i]+ele[j]==sum&&ele[i]!=ele[j])
			{
				printf(" %d = %d + %d \n",sum,ele[i],ele[j]);
			}
		
			else 
			{
				continue;
			}
   	}
		}
		
	
return 0;
}