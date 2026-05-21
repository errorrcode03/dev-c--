#include<stdio.h>
int main ()
{
	int len;
	printf("Enter the Length of array : \n");
    scanf("%d",&len);
    int arr[len];
    printf("Enter the array : \n");
    for(int i=0;i<len;i++)
    {
	scanf("%d",&arr[i]);
             }
        printf("The reverse of the array is : \n");
        for(int i=len-1;i>=0;i--)
        {
        	printf("  %d ",arr[i]);
		}
  
  return 0;          
}