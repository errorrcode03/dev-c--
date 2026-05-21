#include<stdio.h>
int main ()
{
	float number1, number2;
	printf("Enter The First Number :\n");
	scanf("%f",&number1);
	printf("Enter The Second Number :\n");
	scanf("%f",&number2);
   int x;
   printf("Enter The Function You Want To Do : ");
    printf(" 1. Multiplication(*)(Press 1)\n 2. Division(/)(Press 2) \n 3. Addition(+)(Press 3)\n 4. Subtraction(-)(Press 4)\n");
	scanf("%d",&x);
	if(x==1)
	{
		printf("The Result is : %f",(number1*number2));
	}
	if(x==2)
	{
		printf("The Result is : %.2f",(number1/number2));
	}
     if(x==3)
     {
	printf("The Result is : %.2f",(number1+number2));
     }
if(x==4)
     {
	printf("The Result is : %.2f",(number1-number2));
   }
   if(x>=4)
   {
   	
   	printf("Error Found !\n");
   }

return 0;
}