#include<stdio.h>
#include<string.h>
int main()
{
	int i,k,j,z;
	char msg[10];
	char ct;
	char a[]="abcdefghijklmnopqrstuvwxyz";
	printf("enter the message:");
	scanf("%s",&msg);
	printf("enter the key");
	scanf("%d",&k);
	for(i=0;i<strlen(msg);i++)
	{
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]==msg[i])
			{
				z=(j-k)%26;
				ct=a[z];
				printf("%c",ct);			
		    }
		}
	}
	return 0;
}
