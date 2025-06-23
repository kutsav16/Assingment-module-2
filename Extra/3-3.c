#include <stdio.h>

int main() {
    int num, digit, sum = 0, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    int temp = num;  
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("\nSum %d is: %d\n", temp, sum);
    printf("\nReversed: %d\n", reverse);

    return 0;
}
