#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter the number you want to sum from 1  :  \n");
	scanf("%d",&num );
	for(int i=1;i<=num;i++)
	{
		sum=i+sum;
	}
printf("The sum from 1 upto %d is    %d  \n",num,sum);
return 0;
}