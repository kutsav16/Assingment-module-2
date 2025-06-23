#include<stdio.h>
int main()
{
	int i,num,rem,sum,n=1000;
	for(i=1;i<=n;i++)
	{
	int sum=0;
	int temp = i;
	num = i;
	while(num!=0)
	{
	    rem = num % 10;
		sum = sum + rem*rem*rem;
		num = num/10;
	}
	
	if(temp==sum)
	{
		printf("\n%d",i);
	}
   }
}
