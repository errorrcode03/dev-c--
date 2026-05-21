#include<stdio.h>
int main()
{
	char x;
	printf("enter");
	scanf("%c",&x);
	if(x=='a' || x=='e'|| x=='i' || x=='o' || x=='u')
	{
		printf("vowel\n");
	}
	else 
	{
		printf("consonent\n");
	}
	return 0;
}