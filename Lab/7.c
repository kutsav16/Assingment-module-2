#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=10; i++)
    {
        if(i==6)
        {
            break;

           
        }
         if(i==3)
        {
            continue;
        }
        printf("\n number is = %d",i);

    
    }
    return 0;
}