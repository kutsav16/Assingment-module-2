#include<stdio.h>
void rev(char str[])
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
int main()
{
	char str[100];
	printf("\nEnter the value in str1 = ");
	gets(str);
	rev(str);
	return 0;
}
