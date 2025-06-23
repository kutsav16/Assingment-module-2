#include <stdio.h>

int main() {
    int a, b, c;
    
   
    printf("\nEnter num1 numbers: ");
    scanf("%d", &a);
    printf("\nEnter num2 numbers: ");
    scanf("%d", &b);
    printf("\nEnter num3 numbers: ");
    scanf("%d", &c);


    
    if (a >= b && a >= c)
        printf("\nLargest number: %d", a);
    else if (b >= a && b >= c)
        printf("\nLargest number: %d", b);
    else
        printf("\nLargest number: %d", c);

    // Finding the smallest number
    if (a <= b && a <= c)
        printf("\nSmallest number: %d", a);
    else if (b <= a && b <= c)
        printf("\nSmallest number: %d", b);
    else
        printf("\nSmallest number: %d", c);

    return 0;
}
