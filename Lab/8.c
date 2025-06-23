#include<stdio.h>
int fact(int num);
int main()
{
    int num;
    printf("\n enter number : ");
    scanf("%d",&num);
    int fct=fact(num);
    printf("\n %d fact is : %d",num,fct);
    return 0;
}
int fact(int num)
{
    int fact=1,i;
    for ( i = 1; i<=num; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}