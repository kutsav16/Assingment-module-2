#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    float ave;

    printf("\nenter the number of ele: ");
    scanf("%d", &n);

    printf("\nenter %d ele:\n", n);
    for (i = 0; i < n; i++) {
        printf("value of %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add to sum
    }

    ave = (float)sum / n;

    printf("\nsum : %d", sum);
    printf("\nave : %.2f\n", ave);

    return 0;
}
