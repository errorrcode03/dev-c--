#include<stdio.h>
int main()
{
	int i,j,len,arr[len];
	printf("Enter the size of the array : ");
	scanf("%d",&len);
	printf("Enter the ARRAY : \n");
	for(i=0;i<len;i++){
	scanf("%d",&arr[len]);
       }
       
       for(i=0;i<len;i++)
   {
   	
   	for(j=i+1;j<len;j++)
   	{
   		if (arr[i]==arr[j])
   		{
   			printf(" Dublicate found  %d \n",arr[i]);
		   }
               else
            {
            	printf(" NO dublicates \n");
			   }   
            
	   }
   	
   }
	
}