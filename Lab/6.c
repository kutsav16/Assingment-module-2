#include<stdio.h>
int main()
{
    int i;
    printf("\n print 1 to 10 using for loop := ");
    for(i=1; i<=10; i++)
    {
        printf("\n %d",i);
    }
    

    printf("\n print 1 to 10 using while loop ");
    i=1;
    while (i<=10)
    
    {
       printf("\n %d",i);
       i++;
    }
    

    printf("\n print 1 to 10 using do while loop: ");
    i=1;
    do
    {
        printf("\n %d ",i);
        i++;
    } while (i<=10);

    return 0;
    
}