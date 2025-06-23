#include<stdio.h>
int main()
{
    int num,flag=1,i;
    printf("\n enter the value of num: ");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)
            {
                flag=0;
            }
    }
    if(flag==1)
    {
        printf("\n prime");

    }
    else{
        printf("\n not primr");
    }
    return 0;
    
}