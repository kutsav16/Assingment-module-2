#include <stdio.h>

int main() {
    int num, start, end, i;

   
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    
    printf("\ntable of %d from %d to %d:\n", num, start, end);
    for (i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
