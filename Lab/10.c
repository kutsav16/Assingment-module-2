#include<stdio.h>
int main()
{
   int a=10,b=20;
   int *ptr=&a;
   printf("\n value of a : %d",a);
   printf("\n value of a : %d",*ptr);
   printf("\n address of a :%p",ptr);
   printf("\n address of a :%p",&a);
    return 0;

}