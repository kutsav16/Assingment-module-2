#include<stdio.h>

void fibb(int teras) {
    int i, a = 0, n = 1, k;
    printf("\n%d %d", a, n);
    for(i = 0; i < teras - 2; i++) {
        k = a + n;
        printf(" %d", k);
        a = n;
        n = k;
    }
}

int main() {
    int teras;
    printf("\nEnter the number of terms: ");
    scanf("%d", &teras);
    fibb(teras);
    return 0;
}
