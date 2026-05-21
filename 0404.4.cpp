#include<stdio.h>
int main()
{
	char ch ;
	printf("enter the value ");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9' )
{
	printf("number");
}
	else if(ch>='a' && ch<='z');
	{
	printf("letter");
	}
	return 0;
	
}