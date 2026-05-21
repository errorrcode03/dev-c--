#include<stdio.h>
int main ()
{
	//The function accepts two positive integers ‘r’ and ‘unit’ and a 
	//positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents
	// the number of rats present in an area, ‘unit’ is the amount of food 
	//each rat consumes and each ith element of array ‘arr’ represents the 
	//amount of food present in ‘i+1’ house number, where 0 <= i
 int r;//r=number of rats 
 int unit ;//unit is number of food present in a home 
 printf("Enter the number of rats present : \n");
 scanf("%d",&r);
 printf("Enter the Units of foods present : \n");
 scanf("%d",&unit);
 int n;
 printf("Enter the amount of houses : \n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the amaount of food present in each homes : \n");
 for(int i=0;i<n;i++)
 {
 	printf("%d\tth\t:\t",i+1);
 	scanf("%d",&arr[i]);
 }
 int sum=0;
 for(int i=0;i<n;i++)
 {
   sum+=arr[i];
 	if(sum>=r*unit)
 	{
 		printf("The Unit Will be : %d\n",i+1);
	 break;
	 }
	 else {
	 	printf("Something went wrong ! Try Agian !\n");
	 }
 }

}