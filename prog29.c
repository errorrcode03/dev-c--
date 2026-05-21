#include<stdio.h>
#include<string.h>
void fonthash(char str[])
{
	int n=strlen(str);
	int j;
	int count=0;
	char result[n+1];
	for(int i=0;i<n;i++)
	{
		if(str[i]=='#')
		{
			count++;
		}
	}
		for(int i=0;i<count;i++)
		{
			result[j++]='#';
		}
		for(int i=0;i<n;i++){
				if(str[i]!='#')
				{
					result[j++]=str[i];
				}
		                       }
		            
		            strcpy(str,result);
}
int main()
{
	char str[99];
	printf("Enter A String : ");
	fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; 

    fonthash(str);

    printf("Output: %s\n", str);

    return 0;
}