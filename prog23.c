#include<stdio.h>
void main()
{
	int n;
	printf("Enter the Days of Months You Want : \n");
	scanf("%d",&n);
	
	
	if(n==31)
	{
		printf("JANUARY\n MARCH\n MAY\n JULY\n AUGUEST\n OCTOBER\n DECEMBER\n");
	}
	else if (n==30)
	{
		printf("APRIL\n JUNE\n SEPTEMBER\n NOVEMBER\n");
	}
	else if(n==28||n==29)
	{
		printf("FEBRUARY\n");
	}
	else
	{
		printf("INVLID NUMBER . TRY AGAIN !");
	}
}