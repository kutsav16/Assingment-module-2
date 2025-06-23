#include<stdio.h>
int main()
{
    int a[5],i;
    
    for ( i = 0; i < 5; i++)
    
    {
        printf("\n enter vale in your 1D array a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n your a array is : ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\n 3x3 metrix sum program :");
    int b[3][3],c[3][3],j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\n enter  a matrix values in a[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }    
    }
    printf("\n your a metrix array is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            
            printf("%d",b[i][j]);
        } 
        printf("\n");   
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\n enter  c matrix values in c[%d][%d] : ",i,j);
            scanf("%d",&c[i][j]);
        }    
    }
    printf("\n your c metrix array is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            
            printf("%d",c[i][j]);
        } 
        printf("\n");   
    }

    printf("\n sum of metrix :\n");
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            
            printf("%d ",b[i][j]+c[i][j]);
        } 
        printf("\n");   
    }
    
    return 0;
}