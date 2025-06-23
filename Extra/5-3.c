#include<stdio.h>

void palindrome(int num)
{
    int rem, rev = 0;
    int copy = num;

    while(num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    if(copy == rev)
    {
        printf("\n%d palindrome number", copy);
    }
    else
    {
        printf("\n%d not a palindrome number", copy);
    }
}

int main()
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);

    palindrome(num);
    return 0;
}
