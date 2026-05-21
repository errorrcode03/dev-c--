#include<stdio.h>
float main()
{
float num1;
float num2;
printf("Enter the First Number : \n");
scanf("%f",&num1);
printf("Enter the Second Number : \n");
scanf("%f",&num2);
if(num2==0)
{
	printf("Cannot possibe \n");
}
else {
	printf("The Division Is : %.2f",num1/num2);
}
return 0;	
}