#include<stdio.h>
int main()
{
	int x,n;
	printf("ENTER THE POSITIVE INTEGER\t");
scanf("%d",&x);
for(n=2;n<=x/2;n++)
{
if(x%n==0)
{
	printf("NOT PRIME\t");
}
else
{
	printf("PRIME\t");
}
}
return 0;
}
