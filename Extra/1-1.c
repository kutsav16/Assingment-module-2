#include<stdio.h>
int main()
{
    int num1, num2;
    char ch='%',cho;
    printf("\n enter number 1 : ");
    scanf("%d",&num1);
    printf("\n enter number 2 : ");
    scanf("%d", &num2);

    printf("\n1.if you add press +");
    printf("\n2.if you add press -");
    printf("\n3.if you add press *");
    printf("\n4.if you add press /");
    printf("\n5.if you add press %c",ch);
    up:
    printf("\n enter your choise : ");
    scanf(" %c",&cho);
    switch (cho)
    {
    case '+':
        printf("\n %d and %d add is : %d ",num1,num2,num1+num2);
        break;
    case '-':
        printf("\n %d and %d sub is : %d ",num1,num2,num1-num2);
        break;
    case '*':
        printf("\n %d and %d mil is : %d ",num1,num2,num1*num2);
        break;
    case '/':
        printf("\n %d and %d div is : %d ",num1,num2,num1/num2);
        break;
    case '%':
        printf("\n %d and %d mod is : %d ",num1,num2,num1%num2);
        break;
    
    default:
        printf("\n invallid choice");
        break;
    }
    printf("\n press y for continu :");
    scanf(" %c",&cho);
    if(cho=='y' || cho=='Y')
    {
        goto up;
    }

    return 0;

}