#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char msg[10];
	char a[]="abcdefghijklmnopqrstuvwxyz";
	char b[]="qwertyuiopasdfghjklzxcvbnm";
	printf("enter the message:");
	scanf("%s",&msg);
	for (i=0;i<strlen(msg);i++)
	{
		for (j=0;j<strlen(a);j++)
		{
			if(a[j]==msg[i])
			printf("%c",b[j]);
		}
	}
	return 0;
}
