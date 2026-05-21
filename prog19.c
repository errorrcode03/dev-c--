#include<stdio.h>
int main()
{
	int length;
	int curr;
	int prev1=1;
	int prev2=0;
	printf("Enter the legth of the Fibonacci number : \n");
	scanf("%d",&length);
	for(int i=1;i<=length;i++)
	{
		if (i==1)
         {
         	printf("%d,\t",prev2);
		 }
		 else if(i==2)
		 {
		 	printf("%d,\t",prev1);
		 }
		else
		{
		curr=prev2+prev1;
	    prev2=prev1;
	    prev1=curr;
	    if(i<length){
       printf("%d,\t",curr);
         }
         else {
         	printf("%d.\t",curr);
		 }
     }
         
     }
return 0;

}