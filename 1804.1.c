#include<stdio.h>
int main()
{
   int num1,remainder,total=0,num2;
   printf("enter the number=");
   scanf("%d",&num1);
   num2=num1;
   while(num1>0){
      remainder=num1%10;
      total=total+(remainder*remainder*remainder);
      num1=num1/10;
   }
   if(num2==total)
      printf("This number is Armstrong number");
   else
      printf("This number is not Armstrong number");
   return 0;
}