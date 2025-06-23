#include<stdio.h>
void fact(int num)
{
	int i,fact=1;  
    for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("\nthe factorial of %d is %d",num,fact);
}
int main()
{
	int num;
	printf("Enter the number:=");
	scanf("%d",&num);
	fact(num);
	
}
