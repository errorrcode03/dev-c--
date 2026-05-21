#include<stdio.h>
int main ()
{
	int len;
	printf("Enter the length of the array : \n");
	scanf("%d",&len);
	int num[len];
	printf("Enter the array : \n");
	for (int i=0;i<len;i++)
	{
		scanf("%d",&num[i]);
	}
	int next=num[0];
	for(int i=0;i<=len;i++)
	{
		if(num[i]>next)
		{
			num[i]=next;
		}
		else
		{
			
		}
	}
printf("The biggest element of the array is : %d \n",next);
}