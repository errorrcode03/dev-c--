#include<stdio.h>
int main()
{
   int num1,remainder,total=0,num2,n;
   printf("enter the number=");
   scanf("%d",&num1);
   printf(" Enter The Digree ");
   scanf("%d", &n);
   num2=num1;
   while(num1>0){
      remainder=num1%10;
      total=total+(remainder^n);
      num1=num1/10;
   }
   if(num2==total)
      printf("This number is Armstrong number");
   else
      printf("This number is not Armstrong number");
   return 0;
}