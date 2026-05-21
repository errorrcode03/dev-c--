#include<stdio.h>
int main ()
{
	int a, b ;
	int div ,mult,sum, subt;
	printf("Enter the first number : \n");
	scanf("%d",&a);
	printf("Enter the second number : \n");
	scanf("%d",&b);
	
	int  function;
	printf("Enter the function you want : \n");
	printf(" 1 . Summetion ( press 1 ) \n");
	printf(" 2 . Division ( press 2 )\n");
	printf(" 3 . Subtraction ( press 3 ) \n");
	printf(" 4 . Multiplication ( press 3 ) \n");
     scanf("%d",&function);
  if(function<=4 && function >=1)
  {
	if(function == 1)
	{
		printf("The sum is : %d \n",(a+b));
	 } 
	 else if (function  == 2)
	 {
	 	if (b!=0)
	 	{
	 	printf("The division is : %d\n", (a/b));
	 }
	 else 
	 {
	 	printf(" Your division result is Undefined of Error \n");
	 }
	 }
	 else if (function == 3 )
	 {
	 	printf("The subtraction is : %d\n",(a-b));
	 }
	 else if(function == 4)
	 {
	 	printf("The multiplication is : %d\n",(a*b));
	 }
}
else 
{
	printf("Please Choose the number between 1-4 and try again \n");
	
}
	 return 0;
	 
}