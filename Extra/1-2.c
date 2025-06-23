#include<stdio.h>
int main()
{
    int num;
    printf("\n enter number : ");
    scanf("%d",&num);
    printf("\ncheck number is even or odd..");
    if(num%2==0)
    {
        printf("\n %d is an even number..",num);

    }
    else
    {
        printf("\n %d is an odd number..",num);
    }
    printf("\nCheck positive, negative or zero..");
    
    if (num > 0)
        printf("\n%d The number is Positive.",num);
    else if (num < 0)
        printf("\n%d The number is Negative.",num);
    else
        printf("\n%d The number is Zero.",num);
    printf("\n Check if multiple of both 3 and 5..");
    if (num % 3 == 0 && num % 5 == 0)
        printf("\nThe number is a multiple of both 3 and 5.");
    else
        printf("\nThe number is NOT a multiple of both 3 and 5.");
    return 0;
}