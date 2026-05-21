#include<stdio.h>
int main()
{
	int dise1[6]={1,2,3,4,5,6};
	int dise2[6]={1,2,3,4,5,6};
	int n ;
	printf("Enter the number you want to sum from two dises : ");
	scanf("%d",&n);
   if(n>1&&n<=12) 
	{
	for(int i=0;i<6;i++)
	{
		for(int j=5;j>=0;j--)
		{
			if(dise1[i]+dise2[j]==n)
				{
				printf("  %d  +   %d  =  %d \n",dise1[i],dise2[j],n);
				
						}
		else
		{
		if(dise1[i]+dise2[j]>n)
		{
			printf("  %d  + %d > %d \n",dise1[i],dise2[j],n);
			}
			else {
			printf(" %d  +  %d < %d \n",dise1[i],dise2[j],n);	
			}
		}
		}
}
}
	else 
	{
		printf("The number canntot exist by summing two dises . Try again \n");
	}
	}